class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        vector<vector<int>>grid(m,vector<int>(n,0));
        //base case 
        if(obstacleGrid[0][0]==1) return 0;
        grid[0][0]=1;
        for(int j=1;j<n;j++){
            if(obstacleGrid[0][j]==0){
                grid[0][j]=grid[0][j-1];
            }
        }
        for(int j=1;j<m;j++){
            if(obstacleGrid[j][0]==0){
                grid[j][0]=grid[j-1][0];
            }
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(obstacleGrid[i][j]==0){
                    grid[i][j]=grid[i-1][j]+grid[i][j-1];
                }
            }
        }
        return grid[m-1][n-1];
        
    }
};