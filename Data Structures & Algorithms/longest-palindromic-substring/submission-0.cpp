class Solution {
public:
    string longestPalindrome(string s) {
        int left,right;
        string longestPalin="";
        for(int i=0;i<s.size();i++){
            //check for odd length palindrome 
            left=i;
            right=i;
            while(left>=0 and right<=s.size()-1 and s[left]==s[right]){
                if(longestPalin.size()<right-left+1){
                    longestPalin=s.substr(left,right-left+1);
                }
                left--;
                right++;
            }
            left=i;
            right=i+1;
            while(left>=0 and right<=s.size()-1 and s[left]==s[right]){
                if(longestPalin.size()<right-left+1){
                    longestPalin=s.substr(left,right-left+1);
                }
                left--;
                right++;
            }



        }
        return longestPalin;
        
    }
};
