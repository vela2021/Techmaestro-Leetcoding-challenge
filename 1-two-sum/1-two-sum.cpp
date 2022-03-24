class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int ,int>m;vector<int >v(0);
        for(int i=0;i<nums.size();i++)
        {
            if(m.count(target-nums[i]))
            {
                v.push_back(i);
                v.push_back(m[target-nums[i]]);
            }
            else m[nums[i]]=i;
        }return v;
        
    }
};