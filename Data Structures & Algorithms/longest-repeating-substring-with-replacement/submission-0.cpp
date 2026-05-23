class Solution {
public:
    int characterReplacement(string s, int k) {
        //map
        unordered_map<char,int>freq;
        int ans =0;
        int left=0;
        int n=s.size();
        for(int right=0;right<n;right++){
            freq[s[right]]++;
            int maxFreq=0;
            for(auto [key,value] : freq){
                 maxFreq=max(maxFreq,value);
            }
            int window = right-left+1;
            if(window-maxFreq<=k){
                ans=max(ans,window);
            }
            else{
                while(window-maxFreq>k){
                    freq[s[left]]--;
                    left++;
                    window=right-left+1;
                    for(auto [key,value] : freq){
                      maxFreq=max(maxFreq,value);
                    }

                }
            }
        }
        return ans;
        
    }
};
