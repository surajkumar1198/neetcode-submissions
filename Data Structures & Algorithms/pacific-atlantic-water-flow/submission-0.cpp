class Solution {
public:
    int dr[4]={0,0,1,-1};
    int dc[4]={1,-1,0,0};
    void dfs(int r,int c,vector<vector<bool>> &visited,int row,int col,vector<vector<int>>& heights){
        visited[r][c]=true;
        for(int i=0;i<4;i++){
            int nr=dr[i]+r;
            int nc=dc[i]+c;
            if(nr<0 || nc<0 || nr>=row || nc>=col) continue;
            if(visited[nr][nc]) continue;
            if(heights[r][c]<=heights[nr][nc]){
                dfs(nr,nc,visited,row,col,heights);
                visited[nr][nc]=true;
            }
        }
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int row=heights.size();
        int col=heights[0].size();
        vector<vector<int>>ans;
        vector<vector<bool>>pacific(row,vector<bool>(col,false));
        vector<vector<bool>>atlantic(row,vector<bool>(col,false));
        for(int i=0;i<col;i++){
            dfs(0,i,pacific,row,col,heights);
        }
        for(int i=0;i<row;i++){
            dfs(i,0,pacific,row,col,heights);
        }
        for(int i=0;i<col;i++){
            dfs(row-1,i,atlantic,row,col,heights);
        }
        for(int i=0;i<row;i++){
            dfs(i,col-1,atlantic,row,col,heights);
        }
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(atlantic[i][j] && pacific[i][j]){
                   ans.push_back({i,j});
                }
            }
        }
        return ans;

        
    }
};
