class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int answer=0,i=nums[0],j=0;
        for(auto it:nums)
        {
            if(i!=it)
            {
                j=j-1;
               if(j<0)
               {
                i=it;
                   j=0;
               }
            }
            if(i==it)
            {
                j=j+1;
            }
            
        }return i;
    }
};