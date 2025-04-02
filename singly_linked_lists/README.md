0. Print list:

- In our list we have two nodes, the stack node which has the str, length and next...
We made our reference node aka head node using malloc, and we saved the address of the stack node using new->next = &hello; then we updated head = new.
So the first node (heap) has the address of the next node (stack), and the second node, we assigned its next to NULL to close the list.
Is that right

1-list_len.c.

- calculating the length of the node by iterating(h->next) and increase count every loop

2-add_node.c:

- this task assums the list already has a NULL so we only create a new node and assign its ptr to node to the next old node.
f I have a pointer called head, which points to a value like x (e.g. head = &x), and I pass it to a function as fun(int *head), then:

I'm only passing a copy of the address of x

I can change the value of x using *head = 42 — this affects main()

But if I do something like head++ inside the function, I’m only changing the local copy of the pointer

The original pointer in main() stays the same — it’s not affected

So in this case, we cannot change the pointer itself in main() — only the value it points to.

But if I pass &head and receive it as int **head, then:

Now I have access to the pointer itself in main()

I can change the address it holds using *head = malloc(...) — this changes the pointer in main()

I can also change the value it points to using **head = 48

✅ Both the pointer and the value can now be changed and will affect main()

- in this task, we are trying to create a new node by taking (&head, str).
- we will receive (&head) with (int **head), so we have to create dynamic memory for the new node.
- we will do this by *head = malloc(sizeof(list_t)). this will return the new address of the new node.
- so to access head node's str field, we have to use (*head)->str.. as *(head->str) is wrong since node has multiple fields and needs to be specified.
- we also have to assign the new ptr to node for the new node to close the list by (*head)->next = NULL.
- so to make sure this node is the first node, we have to assign head’s ptr to node (the reference) to the address of the new node, which was already done with *head = malloc


3-add_node_end:
- to add a node at the end of the node list, we first, must allocate a memeory for the new node.
- after creating a malloc, we dont need to free malloc if malloc == NULL beacuse it faild and no memeroty was allocated.
- but, if malloc succeeeded and we started to fill it with str..if str points to NULL, then in this case, we have to free the malloc we created it for free(malloc)
- then we must check if the list is empty ..if *head == NULL, if it not empty , then we assign the head node address to new, otherwise,we keep going untill we find it.

4-free_list?

- we have to free the list of each node by node. we first have to make temp = head in each iteration. we move head to points to node b and temp pints to A
- we have to free both (temp->str) and (temp) the memeoy itself.
- then in the next iteration, temp will equal to the next node , temp = head and head will move to the next node and the current node (b) will be cleared both the memeroy and its conent abd so on.
