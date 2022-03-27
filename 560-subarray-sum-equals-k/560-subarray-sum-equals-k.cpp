class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
     map<int,int>m;int count=0;
        int cumulative_sum=0;
m.insert({0,1});
        for(int i=0;i<nums.size();i++)
        {
            cumulative_sum=cumulative_sum+nums[i];
            auto it=m.find(cumulative_sum-k);
            if(it!=m.end())
            {
                count =count + it->second;;
            }
            it=m.find(cumulative_sum);
            if(it!=m.end())
            {
              it->second++;  
            }else 
            {
                m.insert({cumulative_sum,1});
            }
        }return count;
    }
};