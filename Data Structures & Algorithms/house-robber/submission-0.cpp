class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int>maxRobbed(nums.size()+1,0);
        maxRobbed[0]=0;
        maxRobbed[1]=nums[0];
        for(int i=2;i<maxRobbed.size();i++){
            maxRobbed[i]=max(maxRobbed[i-2]+nums[i-1],maxRobbed[i-1]);
        }
        return maxRobbed[maxRobbed.size()-1];

        
    }
};
