//Similar to Kahn's algorithm, here we need to find topological sorting using DFS...
/**
The idea here is to use an auxiliary stack to store the vertices...
Firstly, we will visit all the dependencies of the current node using recursion and then we will add node to our stack...
hence our stack at the end will fill up in required order, 
where the node at top will be the least dependent node and node at bottom will be the depth wise most dependent node
*/
void dfs(vector<int> adj[], int src, vector<bool> &visited, stack<int> &st) {
    visited[src]=true;
    for(int y:adj[src]) {
        if(!visited[y])
            dfs(adj, y, visited, st);
    }
    st.push(src);
}

void topologicalSort(vector<int> adj[], int v) {
    vector<bool> visited(v, false);
    
    stack<int> st;
    for(int i=0;i<v;i++) {
        if(!visited[i]) dfs(adj, i, visited, st);
    }
    
    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
}
