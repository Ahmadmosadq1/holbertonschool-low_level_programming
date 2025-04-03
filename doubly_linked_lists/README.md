0. Print list.

- we are printing the lists of the nodes..we have the hello node which created in the stack and has a value of 8..and then, we have new value which has the address of hello
- reference [address of new] ---> [NULL] new [hello] ---> [new] hello [NULL]”

1. 1. List length
- simple looping with (h->next) with counting.

2. Add node:
- In the task, I completely understood why we need the temp struct variable. Now I have a new understanding of why we do temp = *head. head here is actually not a node — it's more like a reference that holds the address of the first node and represents the beginning of the list.

- We don't want to lose the value of head, so we copy it into a temp variable. Then, the temp value is used to attach the old head to the new head. After constructing the new node, we can safely do *head = new. This way, we preserve the original head without losing it.


3. Add node at the end

- We first allocate malloc for the new node and check if it fails or not.
- Since it is the last node, we assign (new->next) to NULL and also dereference its integer (new->n = n).
- Then we check if the list is empty or not by checking (*head). If the head is NULL, it means the list is empty and has no nodes.
- So we assign the head to the address of the new node and return (new), since there’s no need to walk the list.
- But if (*head) is not NULL, it means it’s **not** an empty list, so we first make temp = *head so we don’t change the actual head.
- We iterate through the nodes right before the last (while (temp->next != NULL)) by (temp = temp->next).
- Then we assign (temp->next = new) and (new->prev = temp).
- With this, we closed the list from both sides (next and prev), creating the double link from the last node to the new one.
- And we're done.

4. Free List

- Please note that `int **head` is a pointer to a pointer to a node, meaning it allows you to change the head itself (not just the node contents).
- `int *head` is a pointer to a node, which lets you modify nodes (like deleting or inserting), but not the actual head pointer.
- To free a list, we first make sure the head pointer is not NULL — meaning the list is not empty.
- If it's not, then we use a loop: `while (head != NULL)`. In each loop, if the current head is not NULL, we:
    - Move to the next node using `temp = head->next`
    - Free the current node (free the one we just passed)
    - Then assign `head = temp`, and repeat the process.

5. Get node at index:

- we write a function that returns any node using the for loop and rest is just typical for loop

6. Sum list:

- It is always good practice to keep `head` unmodified for easier debugging, as it is the entry point to the list.
- We first initialize a temporary pointer using `temp = head`.
- Then we loop through the list using `while (temp != NULL)` and perform the summing.

