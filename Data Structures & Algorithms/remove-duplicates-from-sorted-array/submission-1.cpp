class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      int start=0;
      for(int first=1;first<nums.size();first++){
        if(nums[start]!=nums[first]){
          start++;
          nums[start]=nums[first];
        }
      }
      return start+1;
        
    }
};