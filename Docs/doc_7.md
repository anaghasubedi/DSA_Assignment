# Implementation of Dijkstra's Algorithm in C

---

### Aim

To implement **Dijkstra's shortest path algorithm** in C to find the shortest distance from a given source vertex to all other vertices in a graph.

---

### Theory

**Dijkstra's Algorithm** is a **greedy algorithm** used to find the shortest paths from a single source vertex to all other vertices in a **weighted graph** with non-negative edge weights.  

Key points:

- Maintains a set of vertices whose shortest distance from the source is known.
- Repeatedly selects the vertex with the minimum distance that has not been processed.
- Updates the distance of its adjacent vertices if a shorter path is found.
- Stops when all vertices have been processed.

---

### Data Structure / Array Definition

```c
#define MAX 10
int graph[MAX][MAX];   // Adjacency matrix representation of the graph
int dist[MAX];         // Stores shortest distances from the source
int visited[MAX];      // Tracks visited vertices
````

* `graph[MAX][MAX]` holds the weights of edges.
* `dist[MAX]` stores the minimum distance from the source for each vertex.
* `visited[MAX]` marks which vertices have been processed.

---

### Definition of Program

The program performs the following operations:

1. Initializes all distances to `INT_MAX` and marks all vertices as unvisited.
2. Sets the distance of the source vertex to `0`.
3. Repeatedly selects the vertex with the smallest distance that hasn’t been visited.
4. Updates distances of adjacent vertices if a shorter path is found via the selected vertex.
5. Prints the shortest distance from the source to all vertices.

Functions used:

* `minDistance(int dist[], int visited[], int n)`: Returns the index of the vertex with the minimum distance that hasn’t been visited.
* `dijkstra(int graph[MAX][MAX], int n, int src)`: Implements Dijkstra’s algorithm using the adjacency matrix.

---

### Algorithm

**Dijkstra's Algorithm Steps:**

1. Initialize:

   * `dist[i] = ∞` for all vertices except the source (`dist[source] = 0`).
   * `visited[i] = 0` for all vertices.
2. Repeat for `n-1` vertices:

   * Pick the vertex `u` with minimum `dist[u]` that hasn’t been visited.
   * Mark `u` as visited.
   * For each adjacent vertex `v` of `u`:

     * If `v` is unvisited and `dist[u] + graph[u][v] < dist[v]`, update `dist[v]`.
3. After all vertices are visited, `dist[]` contains the shortest distances from the source.

---

### Sample Output

![Dijkstra's Algorithm](images\prog7_1.png)

---

### Result

The program successfully computes the shortest distances from the source vertex `0` to all other vertices using Dijkstra’s algorithm and displays them correctly.

---

### Conclusion

Dijkstra's algorithm efficiently finds the shortest paths in a weighted graph with non-negative edges. Using arrays for distance and visited status, the adjacency matrix representation makes the implementation straightforward and suitable for small graphs.

---