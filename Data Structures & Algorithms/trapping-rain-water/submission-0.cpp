class Solution {
public:
    int trap(vector<int>& height) {
        vector<int>leftHeight(height.size());
        vector<int>rightHeight(height.size());
        int n=height.size();
        leftHeight[0]=height[0];
        rightHeight[n-1]=height[n-1];
        for(int i=1;i<n;i++){
            leftHeight[i]=max(height[i],leftHeight[i-1]);
        }
        for(int i=n-2;i>=0;i--){
           rightHeight[i]=max(height[i],rightHeight[i+1]);
        }
        int maxWater=0;
        for(int i=0;i<n;i++){
            maxWater+=min(leftHeight[i],rightHeight[i])-height[i];
        }
        return maxWater;
        
    }
};
