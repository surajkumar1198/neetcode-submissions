class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longestCons=0;
        unordered_set<int>s;
        for(int num : nums){
           s.insert(num);
        }
        for (auto item:s){
          if(!s.count(item-1)){
           int count=1;
           int temp=item;
           while(s.count(temp+1)){
            count++;
            temp++;
           }
           longestCons=max(longestCons,count);}
        }
    return longestCons;
    }
};
