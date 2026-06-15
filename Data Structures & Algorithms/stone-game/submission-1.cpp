class Solution {
public:
    int maxDiff(int start,int end,vector<int>&piles,vector<vector<int>>&dp){
          if(start==end) return piles[start];
          if(dp[start][end]!=-1e9) return dp[start][end];
          int pickLeft = piles[start]-maxDiff(start+1,end,piles,dp);
          int pickRight = piles[end]-maxDiff(start,end-1,piles,dp);
          return dp[start][end]=max(pickLeft,pickRight);
    }
    bool stoneGame(vector<int>& piles) {
        // Array is even length 
        // every entry in array determines the number of stones in that pile 
        // sumo of the stones is odd -> so there will be a winner 
        // ALice starts first 

        bool AliceTurn = true;
        int start=0;
        int end = piles.size()-1;
        vector<vector<int>>dp(end+1,vector<int>(end+1,-1e9));
        return maxDiff(start,end,piles,dp)==-1e9?false:true;
      
    }
};