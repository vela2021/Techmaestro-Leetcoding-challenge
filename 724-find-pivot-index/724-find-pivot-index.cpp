class Solution {
public:
    int pivotIndex(vector<int>& nums)
    {
        int sum=0;
        for(auto it:nums)
        {
            sum=sum+it;
        }
        int current_sum=0;
        for(int i=0;i<nums.size();i++)
        {
            if(current_sum==sum-nums[i]-current_sum)
            {
                return i;
            }
            current_sum=current_sum+nums[i];
        }
    return -1;
    }
};