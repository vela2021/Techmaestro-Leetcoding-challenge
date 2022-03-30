class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int res=0,j=k;
        int left=0,right=nums.size()-j,total;
        
        for(int i=right;i<nums.size();i++)
        {
            res=res+nums[i];
        }
        total=res;
       while(right<=nums.size()-1)
        {
             
            
            total=total-nums[right]+nums[left];//
           
           
            res=max(total,res);
           left=left+1;
            right=right+1;
            
        }
        return res;
    }
};