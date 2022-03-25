class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
    int start=0,end=nums.size()-1,i=end,j;vector <int>answer(end+1,0);
        while(start<=end)
        {
            int a= nums[start]*nums[start];int b= nums[end]*nums[end];
           
             if(start==end)
            {
                answer[i]=a;
                break;
            }
           if(a<b)
            {
                answer[i]=b;
                end--;
                i--;
            }
           else if(a==b)
            {
                answer[i]=a;i--;
                answer[i]=b;i--;
                start++;
                end--;
            }
            else// (a>b) 
           {
                answer[i]=a;
                start++;
                i--;}
        }return answer;
        
    }
};