class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char,int>freq;
        int time=0;
        priority_queue<int>pq;
        for(auto task: tasks){
            freq[task]++;
        }
        for(auto [key,value]: freq){
            pq.push(value);
        }
        while(!pq.empty()){
            int count =n+1;
            vector<int>temp;
            while(count && !pq.empty()){
                int cnt=pq.top();
                pq.pop();
                cnt--;
                if(cnt>0){
                   temp.push_back(cnt);
                }
                time++;
                count--;
            }
            for(auto x:temp){
                pq.push(x);
            }
            if(!pq.empty()){
                time+=count;
            }
        }
        return time;

        
    }
};
