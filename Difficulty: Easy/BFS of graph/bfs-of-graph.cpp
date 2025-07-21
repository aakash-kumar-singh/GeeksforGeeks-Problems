class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
        // Code here
        int V=adj.size();
        vector<int> bfsRes;
        vector<bool> visited(V,false);
        queue<int> q;
        q.push(0);
        visited[0]=true;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            bfsRes.push_back(node);
            for(int neighbour:adj[node]){
                if(!visited[neighbour]){
                    q.push(neighbour);
                    visited[neighbour]=true;
                }
            }
        }
        return bfsRes;
    }
};