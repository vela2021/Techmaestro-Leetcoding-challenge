class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0,j=matrix[0].size()-1;
        while(i<matrix.size()and j>=0)
        {
            if(matrix[i][j]<target) 
            {
                i=i+1;
            }
            else if(matrix[i][j]>target)
            {
                j=j-1;
            }
            else return true;
        }
        return false;
    }
};