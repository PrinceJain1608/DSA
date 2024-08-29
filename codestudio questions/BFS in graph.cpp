//APPROACH 1
vector<int> bfsTraversal(int n, vector<vector<int>> &adj){
    queue<int> q;
    int src=0;
    q.push(src);
    unordered_map<int,bool> visited;
    visited[src]=true;
    vector<int> ans;
    while(!q.empty()){
        int frontNode=q.front();
        q.pop();
        ans.push_back(frontNode);
        for(auto n:adj[frontNode]){
            if(!visited[n]){
                q.push(n);
                visited[n]=true;
            }
        }
    }
    return ans;
}

//APPRAOCH 2
#include<unordered_map>
#include<queue>
#include<list>
#include<set>
void  preparedAdjList ( unordered_map<int,set<int>> &adjList, vector<pair<int, int>> &edges){
    for(int i=0; i<edges.size();i++){
        int u= edges[i].first;
        int v= edges[i].second;
        
        adjList[u].insert(v);
        adjList[v].insert(u);
    }
}

void bfs(  unordered_map<int,set<int>> &adjList,     unordered_map<int,bool> &visited,    vector<int>&ans,int node){
   queue<int>q;
   q.push(node);
    visited[node]=1;
    
    while(!q.empty()){
        int frontnode=q.front();
        q.pop();
        //storefrontnode to ans
        ans.push_back(frontnode);
        //traverse all neighbours of frontnode
        for(auto i:adjList[frontnode]){
            if(!visited[i]){
                q.push(i);
                visited[i]=1;
            }
        }
    }
}

vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
    unordered_map<int,set<int>> adjList;
    vector<int> ans;
     unordered_map<int,bool> visited;
    
    preparedAdjList(adjList,edges);
    // traverse all components
    for(int i =0;i<vertex;i++){
        if(!visited[i]){
            bfs(adjList,visited,ans,i); 
        }
    }
   return ans; 
}