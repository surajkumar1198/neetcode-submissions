class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int>result(n,0);
        stack<int>stk;
        for(int i=0;i<n;i++){
            while(!stk.empty() and temperatures[i]>temperatures[stk.top()]){
                int index = stk.top();
                result[index]= i - index;
                stk.pop();
            }
            stk.push(i);
        }
        return result;
        
    }
};
