class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int answer=0;
        for(int i=0;i<nums.size();i++)
        {
           if(i!=nums.size()-1)
           {
               if(nums[i+1]>nums[i])
               {
                   answer=answer+nums[i+1]-nums[i];
               }
           } 
        }
        return answer;
    }
};