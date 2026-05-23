class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>freq;
        int ans = nums[0];
        for(int num: nums){
           freq[num]++;
           if(freq[num]>nums.size()/2) return num; 
        }

        return ans;
        
    }
};