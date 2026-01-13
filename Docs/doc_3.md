## Reverse Traversal of a Linked List

---

### Aim

To write a program that **traverses a singly linked list in reverse order** using **recursion**, without modifying the original list.

---

### Theory

A **linked list** is a dynamic data structure consisting of nodes where each node contains:

* `data` – stores the value of the node
* `next` – pointer to the next node in the list

Reverse traversal involves visiting the nodes **from the last to the first**. Using **recursion** is an effective way to perform reverse traversal because the **function calls themselves maintain the order**:

1. Recursively move to the next node until the end of the list.
2. Print the node's value **during the return phase** of the recursion.

This approach ensures the **original linked list remains unchanged**.

---

### Data Structure Definition

```c
typedef struct Node {
    int data;
    struct Node* next;
} Node;
````

**Description:**

* `Node` : Represents a single element of the linked list
* `data` : Stores the integer value of the node
* `next` : Pointer to the next node in the list
* `typedef` : Simplifies usage of the node structure in the program

---

### Description of Functions

* `createNode(int value)` : Creates a new node with the given value and returns a pointer to it.
* `insertEnd(Node** head, int value)` : Inserts a node at the end of the linked list.
* `reverseTraversal(Node* head)` : Recursively traverses the list in reverse order and prints each node's data.
* `display(Node* head)` : Displays the linked list in normal order (optional for visualization).

---

### Algorithm

#### Reverse Traversal

1. Start at the **head** of the linked list.
2. Recursively call `reverseTraversal()` on the next node.
3. When the recursion reaches the **last node**, print its data.
4. Continue returning from recursive calls, printing each node's data.
5. The output shows the linked list **from last to first**.

---

### Description of `main()` Function

The `main()` function:

1. Initializes an empty linked list.
2. Inserts elements into the list using `insertEnd()`.
3. Displays the original list using `display()`.
4. Performs **reverse traversal** using `reverseTraversal()`.
5. Prints the elements of the linked list in **reverse order**.

---

### Sample Output

![Traversal](images/prog3_1.png)

---

### Result

The program successfully traverses a singly linked list in **reverse order** using **recursion**, without altering the original list structure.

---

### Conclusion

This program demonstrates the **power of recursion** for linked list operations. By using recursion:

* Nodes can be visited **from end to start** efficiently.
* The **original linked list remains intact**.
* The approach is **simple and elegant** for singly linked lists.

```

