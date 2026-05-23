class Solution {
public:
  
    int lengthOfLongestSubstring(string s) {
        int longest=0;
        unordered_set<char>unique;
        int left=0;
        for(char c: s){
            while(unique.count(c)){
                unique.erase(s[left]);
                left++;
            }
        
            unique.insert(c);
            longest=max(longest,static_cast<int>(unique.size()));
            
        }

        return longest;
        
    }
};
