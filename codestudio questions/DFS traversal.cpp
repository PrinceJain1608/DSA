void dfs(int node,unordered_map<int,bool> &visted,unordered_map<int,list<int>> &adj,vector<int> &component){
    component.push_back(node);
    visted[node]=true;
    for(auto i:adj[node]){
        if(!visted[i]){
            dfs(i,visted,adj,component);
        }
    }
}
vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    unordered_map<int,list<int>> adj;
    for(int i=0;i<E;i++){
        int u=edges[i][0];
        int v=edges[i][1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<vector<int>> ans;
    unordered_map<int,bool> visted;
    for(int i=0;i<V;i++){
        if(!visted[i]){
            vector<int> component;
            dfs(i,visted,adj,component);
            ans.push_back(component);
        }
    }
    return ans;
}