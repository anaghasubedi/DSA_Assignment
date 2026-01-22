# Implementation of Min Heap and Max Heap in C

---

### Aim

To implement **Min Heap** and **Max Heap** using arrays in C and demonstrate the heap construction by displaying the heap elements.

---

### Theory

A **heap** is a specialized binary tree-based data structure that satisfies the **heap property**:

- **Min Heap**: The value of a node is **less than or equal to** its children. The smallest element is at the root.
- **Max Heap**: The value of a node is **greater than or equal to** its children. The largest element is at the root.

Heaps are commonly used to implement **priority queues** and for **heap sort**.

- In array representation:
  - For a node at index `i`,  
    - Left child index = `2*i + 1`  
    - Right child index = `2*i + 2`  
    - Parent index = `(i - 1) / 2`

---

### Data Structure / Array Definition

```c
int arr[] = {20, 15, 30, 5, 10, 25};
int n = sizeof(arr) / sizeof(arr[0]);

int minHeap[n], maxHeap[n];
````

* `arr[]` is the original array.
* `minHeap[]` stores the min heap version of the array.
* `maxHeap[]` stores the max heap version of the array.

---

### Definition of Program

The program performs the following operations:

1. Copies the original array into `minHeap` and `maxHeap`.
2. Builds a **min heap** using the `minHeapify` and `buildMinHeap` functions.
3. Builds a **max heap** using the `maxHeapify` and `buildMaxHeap` functions.
4. Displays the resulting **min heap** and **max heap**.

Functions used:

* `swap(int *a, int *b)`: Swaps two integers.
* `minHeapify(int arr[], int n, int i)`: Maintains min heap property for a subtree rooted at index `i`.
* `maxHeapify(int arr[], int n, int i)`: Maintains max heap property for a subtree rooted at index `i`.
* `buildMinHeap(int arr[], int n)`: Builds a min heap from an array.
* `buildMaxHeap(int arr[], int n)`: Builds a max heap from an array.
* `display(int arr[], int n)`: Prints the elements of the heap.

---

### Algorithm

**For Min Heap:**

1. Start from the last non-leaf node (`n/2 - 1`) and go up to the root.
2. Apply `minHeapify` on each node:

   * Compare node with its children.
   * Swap with the smallest child if needed.
   * Recursively heapify the affected subtree.

**For Max Heap:**

1. Start from the last non-leaf node (`n/2 - 1`) and go up to the root.
2. Apply `maxHeapify` on each node:

   * Compare node with its children.
   * Swap with the largest child if needed.
   * Recursively heapify the affected subtree.

**Display:**

* Iterate through the array and print each element.

---

### Sample Output

![Min/Max Heap](images\prog6_1.png)

---

### Result

The program successfully constructs both **min heap** and **max heap** from the given array and displays them correctly.

---

### Conclusion

Using the heapify process, arrays can be transformed into **min heaps** and **max heaps** efficiently. This implementation demonstrates:

* How heap properties are maintained.
* How binary heaps are represented in arrays.
* The use of recursion to build and adjust heaps.

---