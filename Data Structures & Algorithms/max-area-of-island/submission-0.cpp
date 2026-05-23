class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
         int row = grid.size();
        int col= grid[0].size();
        vector<vector<int>>visited(row,vector<int>(col,0));
        queue<pair<int,int>>q;
        int maxArea=0;
        int rowD[]={0,0,1,-1};
        int colD[]={1,-1,0,0};
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(visited[i][j]==1 or grid[i][j]==0) continue;
                int area=1;
                q.push({i,j});
                visited[i][j]=1;
                while(!q.empty()){
                pair<int,int>currentLand=q.front();
                int r=currentLand.first;
                int c=currentLand.second;
                q.pop();
                for(int k=0;k<4;k++){
                    int rowX=rowD[k]+r;
                    int colY=colD[k]+c;
                    if(rowX<0 or rowX>=row) continue;
                    if(colY<0 or colY>=col) continue;
                    if(visited[rowX][colY]==1 or grid[rowX][colY]==0) continue;
                    visited[rowX][colY]=1;
                    q.push({rowX,colY});
                    area++;
                }
                }
                maxArea=max(maxArea,area);

            }
        }
        return maxArea;      
    }
};
