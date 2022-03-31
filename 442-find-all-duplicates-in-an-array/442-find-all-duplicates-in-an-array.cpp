class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int >v;
        if(nums.size()<2)
        {
            return v;
        }
        for(int i=0;i<nums.size();i++)
        { int index = abs(nums[i]) - 1;

            nums[index]*=-1;
            if(nums[index]>0)
            {
                v.push_back(abs(nums[i]));
            }
        }
        
        return v;
    }
};