class Solution {
public:
    void expand(string &s,int left, int right,int &numberOfPalindrome,int n){
        while(left>=0 and right<=n-1 and s[left]==s[right]){
            numberOfPalindrome++;
            left--;
            right++;
        }

    }
    int countSubstrings(string s) {
        int n=s.size();
        int numberOfPalindrome=0;
        int left;
        int right;
        for(int i=0;i<n;i++){
            left=i;
            right=i;
            expand(s,left,right,numberOfPalindrome,n);
            left=i;
            right=i+1;
            expand(s,left,right,numberOfPalindrome,n);

        }
        return numberOfPalindrome;
        
    }
};
