class Solution {
public:
    bool solve(string s1,string s2,string s3,int index1, int index2,vector<vector<int>>&dp){
        if(s1.length()==index1 && s2.length()==index2) return true;
        int index3=index1+index2;
        bool takeS1=false;
        bool takeS2=false;
        if(dp[index1][index2]!=-1)return dp[index1][index2];
        if(index1<s1.size() && s1[index1]==s3[index3]){
            takeS1 = solve(s1,s2,s3,index1+1,index2,dp);
        }
        if(index2<s2.size() && s2[index2]==s3[index3]){
            takeS2 = solve(s1,s2,s3,index1,index2+1,dp);
        }
        
        return dp[index1][index2]=takeS1||takeS2;
    }
    bool isInterleave(string s1, string s2, string s3) {
        int l1=s1.size();
        int l2=s2.size();
        int l3=s3.size();
        if(l1+l2!=l3) return false;
        vector<vector<int>>dp(l1+1,vector<int>(l2+1,-1));
        return solve(s1,s2,s3,0,0,dp);
        
    }
};
