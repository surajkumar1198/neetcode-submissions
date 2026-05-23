class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;
        int row=grid.size();
        int col=grid[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==0){
                    q.push({i,j});
                }
            }
        }
        int dirX[]={0,0,1,-1};
        int dirY[]={1,-1,0,0};

        while(!q.empty()){
            auto [r,c]=q.front();
            q.pop();
            for(int i=0;i<4;i++){
                int rx=dirX[i]+r;
                int cy=dirY[i]+c;
                if(rx<0||cy<0||rx>=row||cy>=col) continue;
                if(grid[rx][cy]!=INT_MAX) continue;
                grid[rx][cy]=grid[r][c]+1;
                q.push({rx,cy});

            }

        }
        
    }
};
