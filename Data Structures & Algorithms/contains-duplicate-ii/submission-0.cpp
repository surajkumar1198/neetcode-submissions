class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int left=0;
        int n=nums.size();
        unordered_set<int>s;
        for(int right=0;right<n;right++){
            if(s.count(nums[right])) return true;
            s.insert(nums[right]);
            if(abs(right-left)>=k){
                s.erase(nums[left]);
                left++;
            }
        }

        return false;
        
    }
};