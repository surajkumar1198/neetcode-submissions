class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        unordered_map<int,int>m;
        for(auto t:trust){
            m[t[0]]--;
            m[t[1]]++;
        }

        for(auto [key,value]: m){
            if(value==n-1) return key;
        }

        return -1;

    }
};