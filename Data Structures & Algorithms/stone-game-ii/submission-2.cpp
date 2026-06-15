class Solution {
public:
    int maxProfit(int index,int M ,vector<int>&piles,vector<int>&suffixSum,vector<vector<int>>&dp){
           if(index+2*M>=piles.size()) return suffixSum[index];
           if(dp[index][M]!=-1) return dp[index][M];
           int ans=0;
           for(int x=1;x<=2*M;x++){
               ans=max(ans,suffixSum[index]-maxProfit(index+x,max(M,x),piles,suffixSum,dp));
           }
           return dp[index][M]=ans;
    }
    int stoneGameII(vector<int>& piles) {

        int n = piles.size();
        vector<int>suffixSum(n,0);
        suffixSum[n-1]=piles[n-1];
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        for(int i=n-2;i>=0;i--){
            suffixSum[i]=suffixSum[i+1]+piles[i];
        }
        
        return maxProfit(0,1,piles,suffixSum,dp);
        
    }
};