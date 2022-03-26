class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
        
     sort(nums.begin(),nums.end());
        int interval_size=nums.size();
        vector<vector<int>>ans;
        for(int i=0;i<interval_size;i++)
        {
            if(ans.empty())
            {
               ans.push_back(nums[i]);
            }
           else
            {
            vector<int>&v=ans.back();
                if(v[1]>=nums[i][0])
                {
                    v[1]=max(v[1],nums[i][1]);
                }
                else
                {
                ans.push_back(nums[i]);
                }
            }
        }
   return ans; }
};