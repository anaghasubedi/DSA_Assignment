# Reverse Traversal of a Singly Linked List in C

---

### Aim

To write a program that **traverses a singly linked list in reverse order** using **recursion**, without modifying the original list.

---

### Theory

A **singly linked list** is a dynamic data structure where each node contains:

- **Data**: The value stored in the node.
- **Next Pointer**: Points to the next node in the list.

In a **reverse traversal**, the elements are displayed from the **tail to the head**.  

Using **recursion**, the program can traverse to the end of the list first and then print nodes while backtracking, **without altering the original list**.

---

### Data Structure / Node Definition

```c
typedef struct Node {
    int data;
    struct Node* next;
} Node;
````

* `data`: Stores the value of the node.
* `next`: Pointer to the next node in the list.

---

### Definition of Program

The program performs the following operations:

1. Creates a singly linked list dynamically using `insertEnd`.
2. Displays the original list using `display`.
3. Performs **reverse traversal** using the recursive function `reverseTraversal`.
4. Prints the elements in reverse order without modifying the list.

Functions used:

* `createNode(int value)`: Creates a new node with the given value.
* `insertEnd(Node** head, int value)`: Inserts a node at the end of the list.
* `reverseTraversal(Node* head)`: Recursively prints the nodes in reverse order.
* `display(Node* head)`: Prints the nodes from head to tail.

---

### Algorithm

**Reverse Traversal Using Recursion:**

1. If the current node is `NULL`, return.
2. Recursively call `reverseTraversal` on `node->next`.
3. After returning from recursion, print `node->data`.

**Insertion at End:**

1. If the list is empty, make the new node the head.
2. Otherwise, traverse to the end of the list and link the new node.

**Display:**

* Traverse from head to tail, printing each node.

---

### Sample Output

![Reverse Traversal](images\prog3_1.png)

---

### Result

The program successfully traverses a singly linked list in reverse order using recursion and prints the elements **without modifying the list**.

---

### Conclusion

Recursion provides a simple and elegant way to perform **reverse traversal** of a singly linked list. Unlike reversing the list itself, recursion allows accessing elements from tail to head **without altering the original structure**.

---
