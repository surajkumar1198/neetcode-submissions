class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans;
        int mul=1;
        int zeroCount=0;
        for(int num:nums){
            if(num==0){
                zeroCount++;
            }
            else{mul=mul*num;}
        }
        cout<<"MUl = "<<mul<<endl;
        cout<<"ZeroCount = "<<zeroCount<<endl;
        for(int num:nums){
            if(zeroCount>1){
                ans.push_back(0);
            }
            else if(zeroCount==1){
                if(num==0){
                  ans.push_back(mul);
                }
                else{
                   ans.push_back(0);
                }
            }
            else{
                ans.push_back(mul/num);
            }
        }

        return ans;



    }
};
