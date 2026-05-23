class Solution {
public:
    bool canShip(vector<int>&weights,int days,int mid){
       int d=1;
       int runningSum=0;
       for(auto weight:weights){
        if(runningSum+weight>mid){
            runningSum=weight;
            d++;
        }
        else{
            runningSum+=weight;
        }
       }
       return d<=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=0;
        for(auto weight:weights){
           high+=weight;
        }
        int ans = high;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(canShip(weights,days,mid)){
               ans = mid;
               high=mid-1;
            }
            else{
               low=mid+1;
            }
        }

        return ans;

        
    }
};