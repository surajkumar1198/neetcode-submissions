class Solution {
public:
    int gcd(int x1,int x2){
        if(x2==0) return x1;
        if(x1==0) return x2;
        if(x1==x2) return x1;
        if(x1>x2) return gcd(x1-x2,x2);
        return gcd(x1,x2-x1);

    }
    string gcdOfStrings(string str1, string str2) {
        int l1=str1.size();
        int l2=str2.size();
        if(str1+str2==str2+str1){
         
           int length =  gcd(str1.size(),str2.size());
           return str1.substr(0,length);
        }
        return "";
        
    }
};