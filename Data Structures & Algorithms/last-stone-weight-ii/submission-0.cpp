class Solution {
public:
    int lastStoneWeightII(vector<int>& stones) {
        int totalSum=0;
        for(auto stone:stones){
            totalSum+=stone;
        }
        int targetSum=totalSum/2;
        vector<bool>dp(targetSum+1,false);
        dp[0]=true;
        for(auto stone:stones){
            for(int i=targetSum;i>=stone;i--){
                dp[i]=dp[i]||dp[i-stone];
            }
        }
        for(int i=targetSum;i>=0;i--){
            if(dp[i]){
                return totalSum-2*i;
            }
        }
        return 0;

        
    }
};