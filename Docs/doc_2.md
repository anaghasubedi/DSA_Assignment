# Infix to Postfix Conversion and Evaluation in C

---

### Aim

To write a program in C to **convert an infix mathematical expression to postfix notation** and **evaluate the postfix expression** using stack data structures.

---

### Theory

**Infix Expression:** Operators are written **between operands** (e.g., `A + B`).  
**Postfix Expression (Reverse Polish Notation):** Operators are written **after operands** (e.g., `AB+`).  

**Conversion Algorithm (Infix → Postfix):**

- Uses a **stack** to temporarily hold operators.
- **Operands** are added directly to the postfix expression.
- **Operators** are pushed to the stack according to their **precedence**.
- **Parentheses** are used to control operator precedence.

**Evaluation of Postfix Expression:**

- Uses a **stack of integers**.
- **Operands** are pushed to the stack.
- **Operators** pop two operands, apply the operation, and push the result back.
- The final value on the stack is the evaluated result.

**Operator Precedence:**

| Operator | Precedence |
|----------|------------|
| ^        | 3          |
| * /      | 2          |
| + -      | 1          |

---

### Data Structure / Stack Definition

```c
#define MAX 50

typedef struct {
    char data[MAX];
    int top;
} CharStack;

typedef struct {
    int data[MAX];
    int top;
} IntStack;
````

* `CharStack` stores operators for conversion.
* `IntStack` stores integer operands for evaluation.
* `top` indicates the current top of the stack.

---

### Definition of Program

The program performs the following operations:

1. Reads an **infix expression** from the user.
2. Converts it to **postfix notation** using `infixToPostfix`.
3. Evaluates the **postfix expression** using `evaluatePostfix`.
4. Displays the **postfix expression** and its **evaluated result**.

Functions used:

* `initCharStack` / `initIntStack`: Initialize stacks.
* `pushChar` / `popChar` / `peekChar`: Stack operations for characters.
* `pushInt` / `popInt`: Stack operations for integers.
* `precedence(char op)`: Returns precedence of an operator.
* `infixToPostfix(char infix[], char postfix[])`: Converts infix to postfix using a stack.
* `evaluatePostfix(char postfix[])`: Evaluates the postfix expression using a stack.

---

### Algorithm

**Infix to Postfix Conversion:**

1. Initialize an empty stack.
2. Read the infix expression character by character:

   * If operand: add to postfix.
   * If '(': push to stack.
   * If ')': pop from stack until '('.
   * If operator: pop operators from stack with higher or equal precedence and push the current operator.
3. Pop remaining operators from the stack and append to postfix.

**Postfix Evaluation:**

1. Initialize an empty integer stack.
2. Read the postfix expression:

   * If operand: push to stack.
   * If operator: pop two operands, apply operation, push result.
3. The final value in the stack is the result.

---

### Sample Output

**A:**
![Infix to postfix](images/prog2_1.png)

**B:**
![Infix to postfix](images/prog2_2.png)

---

### Result

The program successfully converts any valid infix expression to postfix notation and evaluates the result using stacks.

---

### Conclusion

Stack data structures are ideal for **operator management** in expression conversion and **operand management** in postfix evaluation. This program demonstrates:

* Correctly respecting **operator precedence and associativity**.
* Efficient evaluation of arithmetic expressions using **LIFO** stack behavior.

---