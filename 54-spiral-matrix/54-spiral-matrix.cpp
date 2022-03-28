class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int>ans;
    int top=0,dir=0;
        int left=0;//coloumn
        int right=matrix[0].size()-1;
        int down=matrix.size()-1;
        while(top<=down and left<=right)
        {  
            if(dir==0)
            {
                for(int i=left;i<=right;i++)
                {
                    ans.push_back(matrix[top][i]);
                }
                top=top+1;
           //   std::  cout<<ans;
            }
            else if(dir==1)
            {
                for(int i=top;i<=down;i++)
                {
                    ans.push_back(matrix[i][right]);
                }
                right=right-1;
            }
            else if(dir==2)
            {
                for(int i=right;i>=left;i--)
                {
                    ans.push_back(matrix[down][i]);
                }
                down=down-1;
            }
          else  if(dir==3)
            {
                for(int i=down;i>=top;i--)
                {
                    ans.push_back(matrix[i][left]);
                }left=left+1;
            }
            dir=(dir+1)%4;
        }
        
        
        
    return ans;
}};