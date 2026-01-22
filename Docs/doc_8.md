## Random Number Sorting Program

---

### Aim

To write a program that generates a list of **N random integers**, allows the user to choose a **sorting algorithm**, sorts the numbers, and displays the results including comparisons and swaps.

---

### Theory

Sorting is the process of arranging data in a particular order. Different sorting algorithms such as **Bubble Sort, Selection Sort, Insertion Sort, and Merge Sort** differ in efficiency. This program demonstrates their application and tracks the number of **comparisons** and **swaps** performed.

---

### Data Structure Definition

```c
int arr[N];
```

**Description:**

* `arr[N]` : Array to store integers.
* `N` : Number of integers provided by the user.

---

### Description of Functions

* `bubbleSort()` : Sorts the array using Bubble Sort and counts comparisons and swaps.
* `selectionSort()` : Sorts the array using Selection Sort and counts comparisons and swaps.
* `insertionSort()` : Sorts the array using Insertion Sort and counts comparisons and swaps.
* `mergeSort()` : Sorts the array using Merge Sort and counts comparisons and swaps.
* `printArray()` : Displays elements of the array.

---

### Algorithm

1. Accept the number of integers `N` from the user.
2. Generate `N` random integers in the range `[1, 1000]`.
3. Display the **original array**.
4. Ask the user to choose a sorting algorithm:

   * Bubble Sort
   * Selection Sort
   * Insertion Sort
   * Merge Sort
5. Sort the array using the selected algorithm.
6. Keep track of **comparisons** and **swaps**.
7. Display the **sorted array**.
8. Display **total comparisons** and **swaps**.

---

### Sample Output

**A:  Bubble Sort**

![Bubble Sort](images\prog8_1.png)

**B: Selection Sort**

![Selection Sort](images\prog8_2.png)

**C: Insertion Sort**

![Insertion Sort](images\prog8_3.png)

**D: Merge Sort**

![Merge Sort](images\prog8_4.png)

---

### Result

The program successfully generates random integers, sorts them using a user-chosen algorithm, and tracks the number of comparisons and swaps.

---

### Conclusion

This program demonstrates the practical application of **sorting algorithms** on arrays. It allows the comparison of algorithm efficiency and provides insight into the performance of Bubble, Selection, Insertion,

---