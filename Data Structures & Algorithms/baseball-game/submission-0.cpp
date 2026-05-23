class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>ans;
        for(auto c:operations){
            if(!(c=="+" || c== "C" || c=="D")){
                ans.push_back(stoi(c));
                continue;
            }
            if(c=="+"){
                int t = ans[ans.size()-1]+ans[ans.size()-2];
                ans.push_back(t);
            }
            else if(c=="D"){
                int t = ans[ans.size()-1]*2;
                ans.push_back(t);
            }
            else if(c=="C"){
                ans.pop_back();
            }
        }
        int sum=0;
        for(auto c:ans){
            sum+=c;
        }
        return sum;
        
    }
};