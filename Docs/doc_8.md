# Implementation of Sorting Algorithms in C

---

### Aim

To implement and demonstrate different **sorting algorithms** in C, including **Bubble Sort**, **Selection Sort**, **Insertion Sort**, and **Merge Sort**, and to count the number of **comparisons** and **swaps** performed during sorting.

---

### Theory

Sorting is the process of arranging data in a specific order (ascending or descending). Different sorting algorithms have different **time and space complexities**.  

**Algorithms implemented:**

1. **Bubble Sort**  
   Repeatedly compares adjacent elements and swaps them if they are in the wrong order.  

2. **Selection Sort**  
   Selects the minimum element from the unsorted part and swaps it with the first unsorted element.  

3. **Insertion Sort**  
   Builds the sorted array one element at a time by inserting elements into their correct position.  

4. **Merge Sort**  
   A **divide and conquer** algorithm that divides the array into halves, recursively sorts them, and then merges the sorted halves.

---

### Data Structure / Array Definition

```c
int arr[N];      // Stores the original array of integers
int arr_copy[N]; // Copy of the array used for sorting
int comparisons; // Counts the number of comparisons
int swaps;       // Counts the number of swaps
````

* `arr[]` stores the random integers generated for sorting.
* `arr_copy[]` is used to preserve the original array for each sorting algorithm.
* `comparisons` and `swaps` track the performance of the algorithm.

---

### Definition of Program

The program performs the following operations:

1. Prompts the user to enter the number of integers `N`.
2. Generates `N` random integers between 1 and 1000.
3. Displays the original array.
4. Allows the user to choose a sorting algorithm:

   * Bubble Sort
   * Selection Sort
   * Insertion Sort
   * Merge Sort
5. Sorts a copy of the array using the selected algorithm.
6. Displays the sorted array along with the total **comparisons** and **swaps** made.

Functions used:

* `printArray(int arr[], int n)`: Prints the elements of an array.
* `bubbleSort(int arr[], int n, int *comparisons, int *swaps)`: Implements Bubble Sort.
* `selectionSort(int arr[], int n, int *comparisons, int *swaps)`: Implements Selection Sort.
* `insertionSort(int arr[], int n, int *comparisons, int *swaps)`: Implements Insertion Sort.
* `mergeSort(int arr[], int l, int r, int *comparisons, int *swaps)`: Implements Merge Sort recursively.
* `merge(int arr[], int l, int m, int r, int *comparisons, int *swaps)`: Merges two sorted halves in Merge Sort.

---

### Algorithm

**1. Bubble Sort:**

![Bubble Sort](images\prog8_1.png)

**2. Selection Sort:**

![Selection Sort](images\prog8_2.png)

**3. Insertion Sort:**

![Insertion Sort](images\prog8_3.png)

**4. Merge Sort:**

![Merge Sort](images\prog8_4.png)

---

### Sample Output

```
Enter the number of integers: 5

Original Array:
523 215 874 412 639

Choose a sorting algorithm:
1. Bubble Sort
2. Selection Sort
3. Insertion Sort
4. Merge Sort
2

Sorted Array:
215 412 523 639 874

Total comparisons: 10
Total swaps: 4
```

---

### Result

The program successfully sorts an array of integers using the chosen sorting algorithm and displays the total number of **comparisons** and **swaps**, allowing performance analysis.

---

### Conclusion

This program demonstrates different sorting techniques and highlights their efficiency in terms of **comparisons** and **swaps**. While simple algorithms like Bubble, Selection, and Insertion Sort are easy to understand, **Merge Sort** is more efficient for larger arrays due to its divide-and-conquer approach.

---