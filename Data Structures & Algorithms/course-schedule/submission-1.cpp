class Solution {
public:
    bool dfs(int node, vector<vector<int>>& adj,vector<int>&visited,vector<int>&pathVisited){
        visited[node]=1;
        pathVisited[node]=1;
        for(auto it:adj[node]){
            if(!visited[it]){
                if(dfs(it,adj,visited,pathVisited)) return true;
            }
            else if(pathVisited[it]){
                return true;
            }
        }
        pathVisited[node]=false;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(numCourses);
        for(auto it:prerequisites){
            adj[it[1]].push_back(it[0]);
        }
        vector<int>visited(numCourses,0);
        vector<int>pathVisited(numCourses,0);
        for(int i=0;i<numCourses;i++){
            if(!visited[i]){
                if(dfs(i,adj,visited,pathVisited)) return false;
            }
        }
        return true;
        
    }
};
