class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        
        for(int i=0;i<n;i++){ 
            
            int target3=target-nums[i];
            
            for(int j=i+1;j<n;j++){
                
                int target2=target3-nums[j];
                int l=j+1; 
                int r=n-1;
                while(l<r){
                    int sum=nums[l]+nums[r];
                    if(sum<target2)l++;
                    else if(sum>target2)r--;
                    else{
                        vector<int>quad(4,0);
                        quad={nums[i],nums[j],nums[l],nums[r]};
                        ans.push_back(quad);
                    
                while(l<r && nums[l]==quad[2]) l++;
                while(l<r && nums[r]==quad[3]) r--;
                    }
                }
            
            while(j+1<n && nums[j]==nums[j+1])j++;
            }
            while(i+1<n && nums[i]==nums[i+1])i++;
        }
        return ans;
    }
};