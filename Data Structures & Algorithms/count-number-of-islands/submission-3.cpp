class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        vector<vector<bool>>visited(row,vector<bool>(col,false));
        queue<pair<int,int>>q;

        int dr[]={0,0,1,-1};
        int dc[]={1,-1,0,0};
        int count =0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(visited[i][j]==true || grid[i][j]=='0'){
                    continue;
                }
                q.push({i,j});
                count++;
                while(!q.empty()){
                    auto [r,c]=q.front();
                    q.pop();
                    visited[r][c]=true;
                    for(int k=0;k<4;k++){
                        int nr = dr[k]+r;
                        int nc = dc[k]+c;
                    if( nr<0 || nc<0 || nr>=row || nc>=col || visited[nr][nc]==true || grid[nr][nc]=='0'){
                        continue;
                    }
                    q.push({nr,nc});
                    visited[nr][nc]=true;
                    }
                }
    
            }
        }

        return count;
    }
};
