// if a premade code is ther and need to use this to complete
void dijkstra(int v, int g[][v], int root) {
    int dist[v], visited[v];
    for(int i = 0; i < v; i++) {
        dist[i] = -1;
        visited[i] = 0;
    }
    dist[root] = 0;
    int min_index = root;
    int min_dist = 0;
    visited[root] = 1;
    while(min_dist != -1) {
        visited[min_index] = 1;
        for(int i = 0; i < v; i++) {
            if(g[min_index][i] > 0) {
                if(visited[i] == 0 && (dist[i] == -1 || (dist[i] > (dist[min_index] + g[min_index][i])))) {
                    dist[i] = dist[min_index] + g[min_index][i];
                } 
            }
        }
        min_dist = -1;
        for(int k = 0; k < v; k++) {
            if(visited[k] == 0) {
                if(min_dist == -1 || (dist[k] != -1 && dist[k] < min_dist)) {
                    min_dist = dist[k];
                    min_index = k;     
                }
            }
        }
    }
