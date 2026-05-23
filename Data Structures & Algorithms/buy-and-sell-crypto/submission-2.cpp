class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPeak=prices[0];
        int n=prices.size();
        int maxProfit=0;
        for(int i=1;i<n;i++){
            minPeak = min(minPeak,prices[i]);
            if(prices[i]>prices[i-1]){
                maxProfit=max(maxProfit,prices[i]-minPeak);
            }
        }
        return maxProfit;
        
    }
};
