class Solution {
public:
    bool dfs(int node,vector<int>&visited,int parent,vector<vector<int>>&adj){

        visited[node]=1;
        for(auto item:adj[node]){
            if(!visited[item]){
                if(dfs(item,visited,node,adj)) return true;
            }
            else if(item!=parent){
                return true;
            }
        }
        return false;

    }
    bool validTree(int n, vector<vector<int>>& edges) {
        vector<vector<int>>adj(n);
        int parent;
        for(auto edge:edges){
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        vector<int>visited(n,0);
    if(dfs(0, visited, -1, adj))
        return false;

    for(int i = 0; i < n; i++) {
        if(!visited[i])
            return false;
    }

    return true;

    }
};
