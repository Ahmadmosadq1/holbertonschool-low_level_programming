0. Print list:

- In our list we have two nodes, the stack node which has the str, length and next...
We made our reference node aka head node using malloc, and we saved the address of the stack node using new->next = &hello; then we updated head = new.
So the first node (heap) has the address of the next node (stack), and the second node, we assigned its next to NULL to close the list.
Is that right

1-list_len.c.

- calculating the length of the node by iterating(h->next) and increase count every loop
