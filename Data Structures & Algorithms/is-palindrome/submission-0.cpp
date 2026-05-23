class Solution {
public:
    bool isPalindrome(string s) {
        int start =0;
        int end = s.size()-1;
        while(start<=end){
            if(isalnum(s[start]) and isalnum(s[end])) {

            
            if(tolower(s[start])==tolower(s[end])){
                start++;
                end--;
            }
            else {
                return false;
            }
            }
            else{
                if(isalnum(s[start])) end--;
                else start++;
            }
        }
        return true;
    }
};
