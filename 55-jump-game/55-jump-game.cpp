class Solution {
public:
    bool canJump(vector<int>& nums) {
       int k, j=nums.size()-1;int i=j;k=i;
        while(i>=0)
        {
          if(nums[i]+i>=k)
            {
                 k=i;
                i--;
              if(k==0)
              {
                return true;;
              };
               
                continue;
            };i--;
            
          
        
        }
    

           
           
           return 0;
    
    }
};