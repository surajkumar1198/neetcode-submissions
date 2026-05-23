class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<
        pair<double,vector<int>>,
        vector<pair<double,vector<int>>>, greater<pair<double,vector<int>>>>pq;


        vector<vector<int>>ans;
        for(auto point:points){

            double euclideanDistance = pow(point[0]*point[0] +point[1]*point[1],0.5);

            pq.push({euclideanDistance,point});
        }
        while(k){
          ans.push_back(pq.top().second);
          pq.pop();
          k--;
        }
        return ans;

        
    }
};
