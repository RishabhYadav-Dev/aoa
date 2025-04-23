#include <stdio.h> 
#include <limits.h> 
#define MAX 100

int minDistance(int dist[], int visited[], int n); 
void dijkstra(int graph[MAX][MAX], int n, int src); 
int minDistance(int dist[], int visited[], int n) {
int min = INT_MAX, min_index; 
for (int v = 0; v < n; v++) {
if (visited[v] == 0 && dist[v] <= min) { 
min = dist[v];
min_index = v;
}
}
return min_index;
}

void dijkstra(int graph[MAX][MAX], int n, int src) 
{
int dist[MAX];
int visited[MAX];

for (int i = 0; i < n; i++) 
{ 
dist[i] = INT_MAX;
visited[i] = 0;
}
dist[src] = 0;
for (int count = 0; count < n - 1; count++) 
{ 
int u = minDistance(dist, visited, n);
visited[u] = 1;

for (int v = 0; v < n; v++) {
if (!visited[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v]) 
{
dist[v] = dist[u] + graph[u][v];
}
}
}

printf("Vertex\tDistance from Source %d\n", src); for (int i = 0; i < n; i++) {
printf("%d\t%d\n", i, dist[i]);
}
} 
int main() { int n, src;
int graph[MAX][MAX];

printf("Enter the number of vertices: "); scanf("%d", &n);

printf("Enter the adjacency matrix:\n"); for (int i = 0; i < n; i++) {
for (int j = 0; j < n; j++) {
scanf("%d", &graph[i][j]);
}
}

printf("Enter the source vertex: "); scanf("%d", &src);

dijkstra(graph, n, src);

return 0;
}






// Algo
// INITIALIZE-SINGLE-SOURCE(G,s)
// 1. for each vertex v ∈ G.V
// 2. v.d = ∞
// 3. v.pi = NIL
// 4. s.d = 0
// RELAX(u,v,w)
// 1. if v.d > u.d + w(u,v)
// 2. v.d = u.d + w(u,v)
// 3. v.pi = u
//   DIJKSTRA (G, w,s) 
// 1 INITIALIZE-SINGLE-SOURCE(G.S) 
// 2 S=0 
// 3 Q = G.V 
// 4 while Q ≠ 0 
// 5 u = EXTRACT-MIN(Q) 
// 6 S = S U {u} 
// 7 for each vertex ve G.Adj[u] 
// 8 RELAX(u, v, w)
