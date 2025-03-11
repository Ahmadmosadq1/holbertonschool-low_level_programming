0-create_array.c

- Creating an array with dynamic memory allocation using malloc function.
- this array is saved in heap memory during the runtime and will stay there as long as the program live.
- you also need to handle two cases. if (size == 0), return NULL and if the malloc() fails to allocate memorty(arr == NULL), return NULL.
