class Solution {
public:
    int tribonacci(int n) {
        vector<int>fib(n+1,0);
        fib[0]=0;
        fib[1]=1;
        fib[2]=1;
        for(int i=2;i<=n;i++){
            fib[i]=fib[i-1]+fib[i-2]+fib[i-3];
        }
        return fib[n];
        
    }
};