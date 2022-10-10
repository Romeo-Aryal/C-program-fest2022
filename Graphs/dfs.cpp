//Traverse all the nodes of a connected graph using Depth First Search
void dfsRec(vector<int> adj[], int i, vector<bool> &visited) {
    visited[i] = true;
    cout << i << " ";
    for(int x:adj[i]) {
        if(!visited[x])
            dfsRec(adj, x, visited);
    }
}

void dfs(vector<int> adj[], int v, int start) {
    vector<bool> visited(v, false);
    dfsRec(adj, start, visited);
}
