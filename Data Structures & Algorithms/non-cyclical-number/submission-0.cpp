class Solution {
public:
    int nextSum(int n){
        int sum=0;
        while(n>0){
            int r= n%10;
            sum+=r*r;
            n=n/10;
        }
        return sum;
    }
    bool isHappy(int n) {

        int slow = n;
        int fast=nextSum(n);
        while(fast!=1 and slow!=fast){
            slow=nextSum(slow);
            fast=nextSum(nextSum(fast));
        }
        return fast==1;
          
    }
};
