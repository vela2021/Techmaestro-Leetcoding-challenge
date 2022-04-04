class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red = 0;
        int blue = nums.size()-1;
        for(int i=0;i<nums.size();)
        {
            if(nums[i]==0 && i>red)swap(nums[i],nums[red++]);
            else if(nums[i]==2 && i<blue)swap(nums[i],nums[blue--]);
            else i++;
        }
    }
};