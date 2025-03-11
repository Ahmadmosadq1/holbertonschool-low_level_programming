0-create_array.c

- Creating an array with dynamic memory allocation using malloc function.
- this array is saved in heap memory during the runtime and will stay there as long as the program live.
- you also need to handle two cases. if (size == 0), return NULL and if the malloc() fails to allocate memorty(arr == NULL), return NULL.

1-strdup.c:
- we have input (str) saved in stack and we want to save it in heap memory using malloc.
- so it copies the str from stack into heap memeory ..aka relocation
