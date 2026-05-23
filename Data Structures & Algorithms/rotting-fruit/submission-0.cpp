class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        queue<pair<int,int>>q;
        int fresh=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==2){
                  q.push({i,j});
                }
                if(grid[i][j]==1){
                    fresh++;
                }
            }
        }
        int minutes=0;
        int dirX[]={0,0,1,-1};
        int dirY[]={1,-1,0,0};
        while(!q.empty() and fresh>0){
            int s=q.size();
            minutes++;
            while(s--){

            auto [r,c]=q.front();
            q.pop();
            for(int i=0;i<4;i++){
                int nr=dirX[i]+r;
                int nc=dirY[i]+c;
                if(nr<0 ||nc<0 || nr>=row ||nc>=col)continue;
                if(grid[nr][nc]!=1) continue;
                grid[nr][nc]=2;
                q.push({nr,nc});
                fresh--;

            }
            
            }
        }

        return fresh ==0?minutes:-1;
        
    }
};
