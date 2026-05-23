class Solution {
public:
    int countOneBits(uint32_t num){
        int count =0;
        for(int i=0;i<32;i++){
            uint32_t bit = (num>>i) & 1;
            if(bit == 1) count++;
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i=0;i<=n;i++){
            ans.push_back(countOneBits(i));
        }
        return ans;


        
    }
};
