0-read_textfile:

- We want to copy the contents of the file from a text to a buffer.
- We first make sure filename does not point to NULL.
- We create a char data type buffer with malloc that should accommodate whatever is in the filename and also check it doesn't point to NULL.
- Size of memory should be multiplied by letters to accommodate it.
- We create our file descriptor by opening the filename with (open sys call).
- Then we read the file in a buffer and assign it to r_fd and then we write the r_fd to standard output.
- Naturally, if either of read or write failed, they will return -1.. so if that's the case, we return 0.
- Then we compare w_fd and r_fd to confirm that what we wrote is in fact what we read. Otherwise, return 0.
- Finally, we free the buffer and close our fd file.

