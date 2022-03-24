class Solution {
public:
    int maxProfit(vector<int>& nums) 
    {
    int min=nums[0],right=1,max_profit=0;//left=buy,right,sell
        for(int i=0;i<nums.size();i++){
            if(min>nums[i])
            {
                min=nums[i];
            }
            else
            {
                if(max_profit<nums[i]-min)
                {
                    max_profit=nums[i]-min;
                }
            }
        }
     return max_profit;
}};