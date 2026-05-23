class Solution {
public:

    vector<int>merge(vector<int>left,vector<int>right){
        vector<int>merged;
        int l=0;
        int r=0;
        while(l<left.size() and r<right.size()){
            if(left[l]<right[r]){
                merged.push_back(left[l]);
                l++;
            }
            else{
                merged.push_back(right[r]);
                r++;
            }
        }
        while(l<left.size()){
            merged.push_back(left[l]);
            l++;
        }
        while(r<right.size()){
            merged.push_back(right[r]);
            r++;
        }
        return merged;

    }
    vector<int> sortArray(vector<int>& nums) {

        if(nums.size()==1) return nums;
        int length = nums.size();
        int mid = nums.size()/2;
        vector<int>left(nums.begin(),nums.begin()+mid);
        vector<int>right(nums.begin()+mid,nums.end());

        left=sortArray(left);
        right=sortArray(right);
        return merge(left,right);

    }
};