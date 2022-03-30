class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int ans = 0;
        int diff = INT_MAX ;
        int n = nums.size() ;
        for(int i = 0; i < n; i++)
        {
            int left = i + 1;
            int right = n - 1;
            while(left < right)
            {
                int temp = nums[left] + nums[right] + nums[i];
                if(nums[i]+nums[left]+nums[right]==target)
                {
                    return target;
                }
                if(temp<target)left++;
                if(temp>target)right--;
                if(abs(target - temp) < diff)
                {
                   ans = temp;
                   diff = abs(target - temp);
                }
                
        }
      
    }return ans;}
};