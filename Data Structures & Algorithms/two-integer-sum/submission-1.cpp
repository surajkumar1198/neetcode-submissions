class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int>m;
        int left,right;
        for(int i=0;i<nums.size();i++){
            if(m.count(target-nums[i])){
                left=m[target-nums[i]];
                right=i;
            }
            m[nums[i]]=i;
            
        }

        return {left,right};
        
    }
};
