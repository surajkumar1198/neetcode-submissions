class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>plus;
        int n=digits.size();
        int carry=0;
        int sum=0;
        int remainder;
        for(int i=n-1;i>=0;i--){
            //case n-1
            if(i==n-1){
                sum=carry+1+digits[i];
            }
            else{
                sum=carry+digits[i];
            }
            carry=sum/10;
            remainder=sum%10;
            plus.push_back(remainder);
        }
        if(carry)plus.push_back(1);
        reverse(plus.begin(),plus.end());
        return plus;
        
    }
};