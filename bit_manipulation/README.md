Task 0:

- it is just converting string binary number to unsigned int.


1 - print_binary:

- We assume the largest size for an int is 4 bytes (32 bits) and use a for loop to print out the binary number.
- To print the exact number of bits for a decimal number with no sign and no BS, the MSB should always be 1.
- We loop from the MSB of the 32-bit binary number, starting at bit 31 and decrementing by 1, shifting until the condition ((n >> bit) & 1) is True.
- (n >> bit) shifts the number to the right — for example, 5 in binary is 00101.
- The first loop checks from the 31st bit down to 0, each time checking ((n >> bit) & 1).
- If ((n >> bit) & 1) == 0, meaning the result is 0, the condition is False and we continue the loop.
- Once we reach the bit that contains the first 1 — for 5 (binary 101), the condition becomes True and breaks the loop with bit = 2.
- Then we do a second loop starting from bit = 2 and decrement to 0, printing each bit using ((n >> bit) & 1).

First loop:
5 >> 3 = 0001, 0001 & 1 = 1 ✅

Second loop:
5 >> 2 = 0001, 0001 & 1 = 1 ✅

Last loop:
5 >> 1 = 0010 (which is 2), 0010 & 1 = 0 ❌

- This method ensures we print only the meaningful binary digits without any leading zeros.

