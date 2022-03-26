class Solution {
public:
   vector<vector<int> > threeSum(vector<int> &nums) {
   vector<vector<int> >ans(0);  int o;
       std::sort(nums.begin(),nums.end());
      for(int i=0;i<nums.size();i++)
       { 
           int first=nums[i];int start=i+1,end=nums.size()-1;
          while(start<end)
           {
              int a =first+nums[start]+nums[end];
               if(a>0)
               {
                   end--;
               }
               else if(a<0)
               {
                   start++;
               }
               else//(a==b)
               {
                  vector<int> v={first,nums[start],nums[end]};
                    ans.push_back(v);
                                
               
               //to avoid dupicate in v's second number
               while(start<end and nums[start]==v[1])start++;
               //to avoid dupicate in v's third number
               while(start<end and nums[end]==v[2])end--;
           }}
           // for skipping duplicate number in first number of triplet
           while(i+1<nums.size() and nums[i]==nums[i+1])
           {
               i++;
           };
       }
       
    return ans;
    
}};