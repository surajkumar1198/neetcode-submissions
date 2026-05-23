class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>freq;
        vector<int>ans;
        int n=nums.size();
        for(auto num:nums){
            freq[num]++;
        }
        for(auto [key,val] : freq){
            if(val>n/3) ans.push_back(key);
        }
        return ans;

        
    }
};