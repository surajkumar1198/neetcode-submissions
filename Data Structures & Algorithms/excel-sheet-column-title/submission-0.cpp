class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans ="";
        while(columnNumber){
            columnNumber--;
            int remainder = columnNumber%26;
            ans=(char)('A'+remainder)+ans;
            columnNumber = columnNumber/26;
        }
        return ans;
        
    }
};