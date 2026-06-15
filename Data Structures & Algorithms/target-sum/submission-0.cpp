class Solution {
public:
    int numberOfWays(int index,int target,vector<int>&nums,int n){
        if(target==0 and index==n) return 1;
        if(index==n) return 0;


        int minus  = numberOfWays(index+1,target+nums[index],nums,n);
        int plus = numberOfWays(index+1,target-nums[index],nums,n);
        return minus+plus;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();

        return numberOfWays(0,target,nums,n);
    }
};
