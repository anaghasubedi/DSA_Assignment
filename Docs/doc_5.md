# Implementation of BFS and DFS Traversal in C

---

### Aim

To implement **Breadth-First Search (BFS)** and **Depth-First Search (DFS)** graph traversal techniques in C and demonstrate traversing an undirected graph using an adjacency matrix.

---

### Theory

Graphs are a set of **vertices (nodes)** connected by **edges**. Graph traversal algorithms visit all nodes of a graph systematically.  

1. **Breadth-First Search (BFS)**  
   - Traverses the graph level by level.
   - Uses a **queue** to keep track of vertices to visit.
   - Visits all neighbors of a vertex before moving to the next level.

2. **Depth-First Search (DFS)**  
   - Traverses the graph by exploring as far as possible along each branch before backtracking.
   - Uses **recursion** or a **stack**.
   - Visits a vertex and then recursively visits all its unvisited neighbors.

---

### Data Structure / Array Definition

```c
#define MAX 10
int adj[MAX][MAX];    // Adjacency matrix representing the graph
int visited[MAX];     // Array to track visited vertices
int n;                // Number of vertices in the graph
````

* `adj[][]` stores the presence of edges between vertices.
* `visited[]` keeps track of vertices that have been traversed.
* `n` is the total number of vertices.

---

### Definition of Program

The program performs the following operations:

1. Reads the number of vertices `n` and number of edges `edges`.
2. Accepts the edges of the graph and stores them in an adjacency matrix `adj[][]`.
3. Prompts for a starting vertex `start`.
4. Performs **BFS traversal** starting from the given vertex using a queue.
5. Performs **DFS traversal** starting from the given vertex using recursion.
6. Prints the order of vertices visited in both BFS and DFS.

Functions used:

* `BFS(int start)`: Implements BFS traversal using a queue.
* `DFS(int v)`: Implements DFS traversal recursively.

---

### Algorithm

**BFS Algorithm:**

1. Initialize all vertices as unvisited.
2. Enqueue the starting vertex and mark it as visited.
3. While the queue is not empty:

   * Dequeue a vertex `v` and visit it.
   * Enqueue all unvisited neighbors of `v` and mark them visited.

**DFS Algorithm:**

1. Mark the current vertex as visited and visit it.
2. For each unvisited neighbor of the current vertex, recursively perform DFS.

---

### Sample Output

![Traversal](images\prog5_1.png)
---

### Result

The program successfully traverses the graph using both **BFS** and **DFS** and displays the order in which vertices are visited.

---

### Conclusion

This program demonstrates **graph traversal techniques** effectively. BFS is useful for finding the shortest path in unweighted graphs, while DFS is helpful for exploring connected components and solving problems such as cycle detection or topological sorting.

---