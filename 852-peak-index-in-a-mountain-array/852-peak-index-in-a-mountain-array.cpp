
class Solution {
public:
    
    int peakIndexInMountainArray(vector<int>& arr) {
        int ans;
        for(int i=0;i<arr.size();i++)
        {
            if(i!=0 and arr[i]>arr[i-1] and arr[i]>arr[i+1])
            {
                return i;
            }
        }return -1;
    }
};