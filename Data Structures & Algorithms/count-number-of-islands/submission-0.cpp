class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int islands=0;
        int row=grid.size();
        int col=grid[0].size();
        vector<vector<int>>visited(row,vector<int>(col,0));
        queue<pair<int,int>>q;
        int rowDir[4]={0,0,1,-1};
        int colDir[4]={1,-1,0,0};
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(visited[i][j]==1 or grid[i][j]=='0') continue;
                q.push({i,j});
                while(!q.empty()){
                    pair<int,int>currentPosition = q.front();
                    int currentRow=currentPosition.first;
                    int currentCol=currentPosition.second;
                    q.pop();
                    for(int i=0;i<4;i++){
                       int currentRowX= currentRow+rowDir[i];
                       int currentColY= currentCol+colDir[i];
                       if(currentRowX<0 or currentRowX>=row) continue;
                       if(currentColY<0 or currentColY>=col) continue;
                       if(visited[currentRowX][currentColY]==1 or grid[currentRowX][currentColY]=='0') continue;
                       q.push({currentRowX,currentColY});
                       visited[currentRowX][currentColY]=1;
                    }

                }
                islands++;
            }
        }

        return islands;
        
    }
};
