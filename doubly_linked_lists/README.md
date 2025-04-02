0. Print list.

- we are printing the lists of the nodes..we have the hello node which created in the stack and has a value of 8..and then, we have new value which has the address of hello
- reference [address of new] ---> [NULL] new [hello] ---> [new] hello [NULL]”

1. dlistint_len.c:
- simple looping with (h->next) with counting.


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

- 
