class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int top=0;
        int bottom = matrix.size()-1;
        int left=0;
        int right = matrix[0].size()-1;
        vector<int>result;
        while(top<=bottom && left<=right){
            for(int i=left;i<=right;i++){
                result.push_back(matrix[top][i]);
            }
            top++;
            for(int j=top;j<=bottom;j++){
                result.push_back(matrix[j][right]);
            }
            right--;
            if(top<=bottom){
            for(int i=right;i>=left;i--){
                result.push_back(matrix[bottom][i]);
            }
            bottom--;
            }
            if(left<=right){
            for(int j=bottom;j>=top;j--){
                result.push_back(matrix[j][left]);
            }
            left++;
            }
        }

        return result;
    }
};



