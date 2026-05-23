class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int>m;
        for(int num:nums){
            m[num]++;
        }
        int k=0;
        for(auto [key,value] : m){
           for(int i=0;i<value;i++){
            nums[k]=key;
            k++;
           }
        }
        
    }
};