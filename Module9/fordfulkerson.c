#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


#define MAX 100

int graph[MAX][MAX];
int visited[MAX];
int parent[MAX];
int V;
int dfs(int u, int sink)
{
    visited[u] = 1;
    if (u == sink)
        return 1;
    for (int v = 0; v < V; v++)
    {
        if (!visited[v] && graph[u][v] > 0)
        {
            parent[v] = u;

            if (dfs(v, sink))
                return 1;
        }
    }
    return 0;
}
int fordFulkerson(int source, int sink)
{
    int maxFlow = 0;
    while (1)
    {
        for (int i = 0; i < V; i++)
            visited[i] = 0;

        parent[source] = -1;
        if (!dfs(source, sink))
            break;
        int pathFlow = 100000000;
        
        for(int v = sink; v != source; v = parent[v])
        {
            int u = parent[v];
            if (graph[u][v] < pathFlow)
                pathFlow = graph[u][v];
        }
        for (int v = sink; v != source; v = parent[v])
        {
            int u = parent[v];
            graph[u][v] -= pathFlow;
            graph[v][u] += pathFlow;
        }
        maxFlow += pathFlow;
    }
    return maxFlow;
}
int main(){
    int E;
    scanf("%d %d", &V, &E);
    for (int i = 0; i < E; i++)
    {
        int u, v, capacity;
        scanf("%d %d %d", &u, &v, &capacity);
        graph[u][v] += capacity;
    }
    printf("%d\n", fordFulkerson(0, V - 1));
    return 0;
}
