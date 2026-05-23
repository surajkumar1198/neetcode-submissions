class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int>stk;
        for(int asteroid: asteroids){
            if(asteroid>0){
                stk.push_back(asteroid);
            }
            else{
                while(stk.size()!=0 and stk[stk.size()-1]>0 and abs(asteroid)>stk[stk.size()-1]){
                    stk.pop_back();
                }
                if(stk.size()!=0 and abs(asteroid)==stk[stk.size()-1]){
                    stk.pop_back();
                }
                else if(stk.size()==0 || stk[stk.size()-1]<0){
                    stk.push_back(asteroid);
                }
            }
        }
        return stk;
        
    }
};