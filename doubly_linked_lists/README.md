# Doubly Linked List Tasks

This project involves building and manipulating a **doubly linked list** in C.  
It includes tasks such as printing list elements, adding nodes at the beginning or end, summing values, freeing memory, and inserting nodes at specific positions. These tasks reinforce knowledge of pointers, memory allocation, and list traversal techniques in low-level programming.

---

## Compilation

All files are compiled using:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o output
```

---

## File List

- `0-print_dlistint.c` – Prints all elements of a doubly linked list.
- `1-dlistint_len.c` – Returns the number of elements in a doubly linked list.
- `2-add_dnodeint.c` – Adds a node at the beginning of a doubly linked list.
- `3-add_dnodeint_end.c` – Adds a node at the end of a doubly linked list.
- `4-free_dlistint.c` – Frees a doubly linked list.
- `5-get_dnodeint.c` – Returns the nth node of a doubly linked list.
- `6-sum_dlistint.c` – Sums all data (n) of a doubly linked list.
- `7-insert_dnodeint.c` – Inserts a new node at a given position.
- `lists.h` – Header file with struct and prototypes.

---

## 0. Print list

### Prototype:
```c
size_t print_dlistint(const dlistint_t *h);
```

### Description:
Prints all elements of a doubly linked list.

### How It Works:
- A `hello` node is created on the stack with a value of 8.
- A new node is created, pointing to the address of `hello`.
- The reference structure looks like:  
  `[address of new] ---> [NULL] new [hello] ---> [new] hello [NULL]`

---

## 1. List length

### Prototype:
```c
size_t dlistint_len(const dlistint_t *h);
```

### Description:
Counts and returns the number of nodes in a doubly linked list.

### How It Works:
- Use a simple loop that traverses with `h->next` while counting the nodes.

---

## 2. Add node

### Prototype:
```c
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
```

### Description:
Adds a new node at the beginning of a doubly linked list.

### How It Works:
- We use a `temp` struct variable to avoid modifying `*head` directly.
- `*head` is a reference to the first node, not a node itself.
- We copy `*head` to `temp`, then assign `temp` as `new->next`.
- After setting up the node, we assign `*head = new` to update the head.

### Key Insight:
Preserving the original head value using a temporary pointer helps maintain the list integrity while updating the structure.

---

## 3. Add node at the end

### Prototype:
```c
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
```

### Description:
Adds a new node at the end of a doubly linked list.

### How It Works:
- Allocate memory for the new node and check for allocation failure.
- Set `new->n = n` and `new->next = NULL`.
- If `*head` is NULL, the list is empty — set `*head = new` and return.
- Otherwise, walk through the list with `temp = *head` until `temp->next == NULL`.
- Link `temp->next = new` and `new->prev = temp` to complete the double linkage.

### Key Insight:
This task teaches how to safely append to the list without affecting the original head, ensuring both directions of the list are connected.

---

## 4. Free list

### Prototype:
```c
void free_dlistint(dlistint_t *head);
```

### Description:
Frees all nodes of a doubly linked list.

### How It Works:
- Clarification: `int **head` allows modifying the head pointer, while `int *head` does not.
- If `head` is not NULL:
  - Loop using `while (head != NULL)`
    - Store `temp = head->next`
    - Free the current node
    - Move `head = temp` to continue

### Key Insight:
Efficient freeing requires correctly tracking the next node before deallocation and understanding the role of pointer-to-pointer for structural modifications.

---

## 5. Get node at index

### Prototype:
```c
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
```

### Description:
Returns the node at a specific index in the list.

### How It Works:
- A basic `for` loop is used to iterate through the list.
- On reaching the desired index, the function returns the corresponding node.

---

## 6. Sum list

### Prototype:
```c
int sum_dlistint(dlistint_t *head);
```

### Description:
Sums all the integer values stored in the list.

### How It Works:
- Keep `head` unmodified for debugging purposes.
- Use a temporary pointer `temp = head`.
- Loop through the list using `while (temp != NULL)` and add values.

---

## 7. Insert at index

### Prototype:
```c
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
```

### Description:
Inserts a new node at a given index in the list.

### How It Works:
- Use `temp` and `temp_prev` to manage node placement.
- Avoid modifying the original head directly.

### Insertion Cases:

**A. Inserting at index 0:**
- `new->prev = NULL`, `new->next = *h`
- If `*h` is not NULL, set `(*h)->prev = new`

**B. Inserting at out-of-range index:**
- Loop up to `idx - 1` and check if a valid node exists.
- If not, return NULL to avoid segmentation faults.

**C. Inserting in the middle:**
- Set `new->next = temp` and `new->prev = temp_prev`
- Update surrounding links:
  - If `temp`, set `temp->prev = new`
  - If `temp_prev`, set `temp_prev->next = new`

