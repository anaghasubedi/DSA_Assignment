#include <stdio.h>

#define MAX 10

int adj[MAX][MAX];
int visited[MAX];
int n;

void BFS(int start)
{
    int queue[MAX];
    int front = 0, rear = 0;
    int i;
    for (i = 0; i < n; i++)
        visited[i] = 0;
    queue[rear++] = start;
    visited[start] = 1;
    printf("BFS Traversal: ");
    while (front < rear)
    {
        int v = queue[front++];
        printf("%d ", v);

        for (i = 0; i < n; i++)
        {
            if (adj[v][i] == 1 && visited[i] == 0)
            {
                queue[rear++] = i;
                visited[i] = 1;
            }
        }
    }
    printf("\n");
}

void DFS(int v)
{
    int i;
    visited[v] = 1;
    printf("%d ", v);
    for (i = 0; i < n; i++)
    {
        if (adj[v][i] == 1 && visited[i] == 0)
        {
            DFS(i);
        }
    }
}

int main()
{
    int i, j, edges, u, v, start;
    printf("Enter number of vertices: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            adj[i][j] = 0;

    printf("Enter number of edges: ");
    scanf("%d", &edges);
        printf("Enter edges (u v):\n");
    for (i = 0; i < edges; i++)
    {
        scanf("%d %d", &u, &v);
        adj[u][v] = 1;
        adj[v][u] = 1; 
    }
    printf("Enter starting vertex: ");
    scanf("%d", &start);
    BFS(start);
    for (i = 0; i < n; i++)
        visited[i] = 0;
    printf("DFS Traversal: ");
    DFS(start);
    printf("\n");
    return 0;
}
