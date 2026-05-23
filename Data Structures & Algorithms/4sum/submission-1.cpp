class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if (i > 0 && nums[i] == nums[i-1]) continue;
            for(int j=i+1;j<n;j++){
                if(j>i+1 && nums[j]==nums[j-1]) continue;
                int left = j+1;
                int right = n-1;
                while(left<right){

                
                long sum = nums[left]+nums[right];
                if(sum+nums[i]+nums[j]==target){
                    ans.push_back({nums[i],nums[j],nums[left],nums[right]});
                    while(left<right and nums[left]==nums[left+1]) left++;
                    while(left<right and nums[right]==nums[right-1]) right--;
                    left++;
                    right--;
                }
                else if(sum+nums[i]+nums[j]>target){
                    right--;
                }
                else{
                    left++;
                }
                }

            }
        }

        return ans;
        
    }
};