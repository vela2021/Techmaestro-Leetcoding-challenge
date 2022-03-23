class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
      
        int m=matrix.size(),n=matrix[0].size();
        vector<vector<int>>answer(n,vector<int>(m,0));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {if(i!=j)
                answer[j][i]=matrix[i][j];
             else
                 answer[i][j]=matrix[i][j];
            }
        }
    return answer;}
};