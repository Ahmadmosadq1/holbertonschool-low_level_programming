Task 0:

- it is just converting string binary number to unsigned int.

1-print_binary:

- we are converting a decimal number to binary number using bitwise oos(i.e & and >>).
- when it comes to bitwise ops, we have to think of decimal number as a block of binary number.
- bitwaise deals with binary. so, we get the first LSB by (n & 1) which is equavelent to the logical op (%1). that gets the last bit.
- then, we shift or move the whole block to the right side once by (n >> 1) to get to the second LSB and apply (n & 1) ans so on.
- in case we have n = 0, when doing (n & 1), it will be skipped since while(0) is false, so we have to add a condition if n = 0, just resturn (0).
