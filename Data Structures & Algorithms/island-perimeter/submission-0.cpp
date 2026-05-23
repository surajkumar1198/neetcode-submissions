class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int row=grid.size();
        int column= grid[0].size();
        // vector<vector<int>>visited(row,vector<int>(column,0));
        // queue<pair<int,int>>q;
        int perimeter=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                if(grid[i][j]==1){
                    if(i-1<0 || grid[i-1][j]==0){
                        perimeter++;
                    }
                    if(j-1<0 || grid[i][j-1]==0){
                        perimeter++;
                    }
                    if(i+1>=row || grid[i+1][j]==0){
                        perimeter++;
                    }
                    if(j+1>=column || grid[i][j+1]==0){
                        perimeter++;
                    }
                }

            }
        }
        
        return perimeter;

    }
};