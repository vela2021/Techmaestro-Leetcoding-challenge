class Solution {
public:
    int findDuplicate(vector<int>& nums) {
     for(int i=0;i<nums.size();i++)
     {
        int k=nums[abs(nums[i])-1];
         if(k>0)
         {
             nums[abs(nums[i])-1]=k*-1;
         }
         else return abs(nums[i]);
     }
   return -1;
    }
};