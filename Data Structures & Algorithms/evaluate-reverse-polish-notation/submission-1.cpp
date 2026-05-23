class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string>stk;
        for(string token : tokens){
            if(token == "+"){
                int firstElement = stoi(stk.top());
                stk.pop();
                int secondElement = stoi(stk.top());
                stk.pop();
                int sum = firstElement+ secondElement;
                stk.push(to_string(sum));
            }
            else if(token == "*"){
                int firstElement = stoi(stk.top());
                stk.pop();
                int secondElement = stoi(stk.top());
                stk.pop();
                int mul = firstElement* secondElement;
                stk.push(to_string(mul));
            }
            else if(token == "/"){
                int firstElement = stoi(stk.top());
                stk.pop();
                int secondElement = stoi(stk.top());
                stk.pop();
                int div = secondElement/firstElement;
                stk.push(to_string(div));
            }
            else if(token == "-"){
                int firstElement = stoi(stk.top());
                stk.pop();
                int secondElement = stoi(stk.top());
                stk.pop();
                int sub =  secondElement-firstElement;
                stk.push(to_string(sub));
            }
            else{
                stk.push(token);
            }
        }
        return stoi(stk.top());
        
    }
};
