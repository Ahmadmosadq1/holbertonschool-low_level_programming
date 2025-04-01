0. Print list:

- This function loops through a singly linked list and prints each node’s string and length. If the string is NULL, it prints [0] (nil) instead. I used a pointer to a constant list_t to access each node, moving through the list using the next pointer until reaching the end (NULL). The function also counts and returns the number of nodes. I now understand how -> accesses struct members via pointers, and how the list is built and connected using dynamic memory or direct struct references.

1-list_len.c.

- calculating the length of the node by iterating(h->next) and increase count every loop
