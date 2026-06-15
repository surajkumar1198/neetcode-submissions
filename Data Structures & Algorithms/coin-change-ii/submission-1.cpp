class Solution {
public:
    int func(int index,int amount,vector<int>&coins,int n,vector<vector<int>>&dp){
        if(amount == 0) return 1;
        if(amount<0 or index==n) return 0;
        if(dp[amount][index]!=-1) return dp[amount][index];
        int take = func(index,amount-coins[index],coins,n,dp);
        int notTake = func(index+1,amount,coins,n,dp);
        return dp[amount][index]=take+notTake;


    }
    int change(int amount, vector<int>& coins) {
        int distinct=0;
        int n=coins.size();
        vector<vector<int>>dp(amount+1,vector<int>(n,-1));
        return func(0,amount,coins,n,dp);

        
    }
};
