class Solution {
public:
void gameOfLife(vector<vector<int>>& board) {

    int dx[9]={0,0,1,-1,-1,1,1,-1}; //row
    int dy[9]={1,-1,0,0,-1,1,-1,1}; //column
    int n = board.size();
    int m = board[0].size();
    
    //new cell;
    int new_cell[26][26];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int c = 0;
                for(int k=0;k<8;k++){
                    int x = i+dx[k];
                    int y = j+dy[k];
                    if(x>=0 && x<n && y>=0 && y<m && board[x][y]==1){c++;}
                }
            if(board[i][j]==0 && c == 3){new_cell[i][j]=1;}
            else if(board[i][j]==1 && c>3){new_cell[i][j]=0;}
            else if(board[i][j]==1 && c<2){new_cell[i][j]=0;}
            else{new_cell[i][j]=board[i][j];}
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        //    printf("%d ",new_cell[i][j]);
            board[i][j]=new_cell[i][j];
        }
      //  printf("\n");
    }
    
    
    return;
}
};