class Solution {
public:
  
    int lengthOfLongestSubstring(string s) {
        int longest=0;
        unordered_set<char>unique;
        int left=0;
        for(int right=0;right<s.size();right++){
            while(unique.count(s[right])){
                unique.erase(s[left]);
                left++;
            }
        
            unique.insert(s[right]);
            longest=max(longest,right-left+1);
            
        }

        return longest;
        
    }
};
