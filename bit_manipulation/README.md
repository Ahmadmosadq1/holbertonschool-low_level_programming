Task 0:

- it is just converting string binary number to unsigned int.


1 - print_binary:

- We assume the largest size for an int is 8 bytes (64 bits) for long int and use a for loop to print out the binary number.
- To print the exact number of bits for a decimal number with no sign and no BS, the MSB should always be 1.
- We loop from the MSB of the 64-bit binary number, starting at bit 63 and decrementing by 1, shifting until the condition ((n >> bit) & 1) is True.
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

2- get_bin_int:

- first, we make sure that index is withing the range by returning (-1) if index is >= 64.
- then, we can retun any idext using (n >> index) & 1...

3 - set_bit:

- We need to set a bit to 1 by using 1 << index.
- To do that, let us say we have n = 5 (00000101) and we want to change bit number 3 to 1.
- We do: 1 << 3 → 00001000.
- Now we do the bitwise OR (|) between n and (1 << 3):
  00000101
| 00001000
  --------
  00001101 → which is 13
4-Clear_bit:

- just like pervious task except, we invert (1 << index) mask and do AND bitwise with n like so (n = n &(1 << index))


5 - flip_bits:

- Here, we want to know how many bits to flip when going from one number to another.
- We use (n >> i) & 1 and XOR with (m >> i) & 1 because XOR is only true if n and m bits are different.
- We are using >> to isolate each bit from LSB to MSB and compare them one by one.

