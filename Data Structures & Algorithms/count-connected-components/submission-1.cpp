class Solution {
public:
    void dfs(int node,vector<int>&visited,vector<vector<int>>&adj){
        visited[node]=1;
        for(auto child:adj[node]){
              if(!visited[child]){
                visited[child]=1;
                dfs(child,visited,adj);
              }
        }
    }
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>>adj(n);
        for(auto edge:edges){
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        vector<int>visited(n,0);
        int count=0;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                count++;
                dfs(i,visited,adj);
            }
        }
        return count;
    }
};
