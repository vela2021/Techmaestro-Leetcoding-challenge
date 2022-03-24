class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zeroes=0;int t=0;
     for(auto i:nums)
     {
         if(i==0) zeroes++;
         else 
         {
             nums[t]=i;
             t++;
         }
     }
        for(int j=nums.size()-zeroes;j<nums.size();j++)
        nums[j]=0;
    }
};