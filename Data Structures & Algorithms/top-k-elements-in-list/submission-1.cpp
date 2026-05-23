class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        vector<int>result;
        unordered_map<int,int>m;
        for(auto num:nums){
            m[num]++;
        }
        int n=nums.size();
        vector<vector<int>>bucketSort(n+1);
        for(auto [key,value] : m){
            bucketSort[value].push_back(key);
        }
        for(int i=n;i>=0 and result.size()<k;i--){
            for(auto item:bucketSort[i]){
                result.push_back(item);
                if(result.size()==k) break;
            }
        }

        return result;
        
    }
};
