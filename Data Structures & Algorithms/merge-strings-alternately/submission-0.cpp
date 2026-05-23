class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int firstStringIndex=0;
        int secondStringIndex=0;
        while(firstStringIndex<word1.size() and secondStringIndex<word2.size()){
            ans+=word1[firstStringIndex];
            ans+=word2[secondStringIndex];
            firstStringIndex++;
            secondStringIndex++;
        }
        while(firstStringIndex<word1.size()){
            ans+=word1[firstStringIndex];
            firstStringIndex++;
        }
        while(secondStringIndex<word2.size()){
            ans+=word2[secondStringIndex];
            secondStringIndex++;
        }
        return ans;
        
    }
};