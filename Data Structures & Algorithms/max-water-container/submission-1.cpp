class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0;
        int right = heights.size()-1;
        int mostWater=0;
        while(left<right){
          int waterStored=min(heights[left],heights[right])*(right-left);
          mostWater=max(waterStored,mostWater);
          if(heights[left]<heights[right]){
            left++;
          }
          else{
            right--;
          }
        }
        return mostWater;
    }
};
