class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int runningSum = 0;
        int left=0;
        int n = nums.size();
        int minimalength=INT_MAX;
        for(int right =0;right<n;right++){
            runningSum+=nums[right];
            while(runningSum>=target){
                minimalength=min(minimalength,right-left+1);
                runningSum=runningSum-nums[left];
                left++;
            }
        }
        return minimalength==INT_MAX?0:minimalength;
        
    }
};