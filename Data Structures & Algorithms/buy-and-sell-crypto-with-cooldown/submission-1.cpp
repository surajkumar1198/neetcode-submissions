class Solution {
public:
    int fun(int index,int buy,vector<int>prices,int n,vector<vector<long>>&dp){
        if(index>=n) return 0;
        if(dp[index][buy]!=-1) return dp[index][buy];
        long profit=0;
        if(buy==1)
            profit = max(-prices[index]+fun(index+1,0,prices,n,dp),fun(index+1,1,prices,n,dp));
        else profit =  max(prices[index]+fun(index+2,1,prices,n,dp),fun(index+1,0,prices,n,dp));
        return dp[index][buy]=profit;
    }
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<long>>dp(n,vector<long>(2,-1));
        return fun(0,1,prices,n,dp);
      
    }
};
