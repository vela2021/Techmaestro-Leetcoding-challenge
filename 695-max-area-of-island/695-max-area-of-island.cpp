class Solution {
    int count_island(int i, int j,vector<vector<int>>& grid,int & count )
    {
        if(i>=grid.size() or j >= grid[0].size() or i<0 or j<0 or grid[i][j]==0)
        {
            return 0;
        }
        grid[i][j]=0;
        if(count_island(i-1,j,grid, count)==1)count++;//up
        if(count_island(i+1,j,grid, count)==1)count++;//below
        if(count_island(i,j-1,grid, count)==1)count++;//left
        if(count_island(i,j+1,grid, count)==1)count++;//right
        return 1;
    }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxi=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                int count=1;
                if(grid[i][j])
                {
                    count_island(i, j, grid, count);
                  maxi=max(maxi,count);  
                }
            }
        }
    return maxi;}
};