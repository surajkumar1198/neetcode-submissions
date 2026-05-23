class Solution {
public:
    bool isValid(string s) {
        stack<char>stk;
        for(char c:s){
            if(stk.empty()){
                stk.push(c);
                continue;
            }
            if(c=='(' || c=='{' || c=='['){
                stk.push(c);
                continue;
            }
            else{
                if(c==']' and stk.top()=='['){
                    stk.pop();
                }
                else if(c=='}' and stk.top()=='{'){
                    stk.pop();
                }
                else if(c==')' and stk.top()=='('){
                    stk.pop();
                }
                else{
                    stk.push(c);
                }
            }

        }
        return stk.empty();
    }
};
