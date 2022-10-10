vector<int> dijkstra(vector<int> graph[], int v, int src) {
    //Distance vector to store shortest distance of each vertex from src...
    vector<int> distance(v, INT_MAX);
  
    //Dik vector to store list of all visited vertices...
    vector<bool> dik(v, false);
    
    //Distance of src vertex from itself is initialized to 0
    distance[src] = 0;
    
    //We need to visit all the vertex at-least once, infact at-most once will also give our result, so we traverse v times
    for(int count=0;count<v;count++) {
      //In this section, we try to find out the minimum length of any vertex which can be visited from already visited vertices  
      int u=-1;
        for(int i=0;i<v;i++) {
            if(!dik[i] && (u==-1 || distance[i]<distance[u])) u=i;
        }
        
        //We mark the current vertex as visited...
        dik[u] = true;
      
        //This is relaxation part...
        //Here we find the adjacent vertices of current vertex and check if we can go from this vertex to next vertex minimally or if previous distance was minimal
        for(int i=0;i<v;i++) {
            if(graph[u][i]!=0 && !dik[i]) {
                distance[i] = min(distance[i], distance[u]+graph[u][i]);
            } 
        }
    }
    
    return distance;
}
