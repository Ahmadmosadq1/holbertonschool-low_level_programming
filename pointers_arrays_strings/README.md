# **Project: C - Pointers, Arrays, and Strings**

## **Task 0: 98 Battery st.**

### **Description:**
- Update the reference of `n` using `*n`.
- `*n` represents the value stored at the pointer `n`.

---

## **Task 1: Swap Two Variables**

### **Description:**
- Swap values between `a` and `b` using dereferencing.
- Direct swapping causes one value to be overwritten, so a **temporary variable** `temp` is needed to hold one value during the swap.

---

## **Task 2: String Length Calculation**

### **Description:**
- Calculate the length of a string by looping through it using a pointer.
- **Two ways to loop using `while`:**
  - `while (*s++)`: Moves the pointer while accessing each index (can be used for manipulation like printing or replacing).
  - Using `s[i] != '\0'`: Ensures termination when the null character (`'\0'`) is reached.
- Be cautious: **Dereferencing moves the pointer**, which means it retains its last position. However, `s++` only moves the pointer without accessing the index.
- The loop increments `i` and prints the final value outside the loop.

---

## **Task 3: Printing a String Character by Character**

### **Description:**
- `*str` is a pointer to a character. `++str` moves the pointer through the array.
- Use a **while loop** where `*str` is not equal to `NULL ('\0')`.
- Avoid `while (*str++)`, as this moves the pointer before printing.
- Instead, use `while (*str)`, ensuring the pointer starts at the first character.

---

## **Task 4: Print a String in Reverse**

### **Description:**
- Move the pointer to the **last index** of the array (`s - 1`).
- First, **loop through the array** using a `while` loop to reach the last index.
- During each iteration, the pointer moves forward (`++s`).
- Print before moving, to avoid skipping the first character.
- Once at `s - 1`, use a **for loop** to move the pointer backward (`--s`), printing each character.

---

## **Task 5: Reverse String Manipulation**

### **Description:**
- Work with pointers to reverse a string efficiently.

---

## **Task 6: Print Every Other Character**

### **Description:**
- Print every **other character** starting from index `0` by using an increment of `+2`.
- First, **calculate the string length** (similar to Task 2).
- Use a **for loop** starting from `0` with `j += 2` to print every other character.

---

## **Task 7: Print Half of a String**

### **Description:**
- Print the **second half** of the string.
- The last position should be **midpoint** `(i = length / 2)`.
- If the string has an **odd length**, include the last character using:
  - `n = (length_of_the_string + 1) / 2`.

---

## **Task 8: Print Elements of an Array**

### **Description:**
- Print elements of an array `a` with size `n`.
- Initialize `i = 0` and loop with `while (i < n)`. 
- **Why `n - 1`?**
  - An array of size `5` has indices from `0` to `4`.
- **Formatting:**
  - Print each element followed by a comma and a space, except for the last element (handled with an `if` condition).

---

## **Task 9: Copy a String**

### **Description:**
- Copy elements from the `src` array to `dest`.
- Use a **while loop** to iterate through `src`, excluding the null terminator.
- Assign `dest[i] = src[i]` for each character.
- **Important:**
  - Manually append the null character (`'\0'`) to `dest`, as it marks the end of the string in C.
 
  ################################################################################################################################################################
  # **Project: More Pointers, Arrays, and Strings**

## **Task 0: strcat**

### **Description:**
- Initialize `i, j = 0` for the destination (`dest`) and source (`src`) arrays.
- First, loop through the `dest` array **excluding the null character**.
- Then, start another loop to append `src` to `dest`.
- When entering the second loop, `dest` starts appending from the last value of `i` (after the first loop ends), while `j` starts from `0`.
- This way, the first element of `src` is appended to the last element of `dest`.

---

## **Task 1: strncat**

### **Description:**
- To concatenate two strings, first move to the last element of the `dest` array, **excluding the null character**.
- `dest` will have `i` positioned at the last element.
- Then, loop through `src` and concatenate it to `dest`, **excluding the null character**.
- At the end, append a **null character (`'\0'`)** to `dest`, as it is necessary for C to recognize the end of the string.

---

## **Task 2: strncpy**

### **Description:**
- Copy elements from `src` to `dest`. The variable `n` controls the number of elements copied.
- Use a `while` loop to copy `src` to `dest`, **excluding the null character**.
- If `n` is **smaller** than the size of `dest`, the remaining elements will be filled with null characters (`'\0'`).
- If `n` is **larger** than `dest`, only the exact size is copied, and the rest of `n` is ignored—no extra null characters are needed.

---

## **Task 3: strcmp**

### **Description:**
- `strcmp` is a function that compares two strings **element by element** using their **ASCII values**.
- A `while` loop is used for comparison.
- Example: `_strcmp("Hello", "Hello")` compares each character (`H` with `H`, `e` with `e`, etc.).
- If all values are equal, it returns `0`.
- If any two elements differ in ASCII values, it returns the **difference between their values**:
  - **Positive** if the first array is larger.
  - **Negative** if the second array is larger.

---

## **Task 4: Reverse an Array**

### **Description:**
- To reverse a string, first loop through the array to reach the **last index**, **excluding the null character**.
- Then, start a loop to move the pointer **in reverse (`--s`)**, printing each element from the last index to the first.
- The loop continues as long as `s[i] > 0`, meaning it moves backward (`s[5] → s[4] → ... → s[0]`), and terminates when it reaches the beginning.

---

## **Task 5: Convert String to Uppercase**

### **Description:**
- To convert a **lowercase letter** to **uppercase**, subtract `32` from its ASCII value.
- Use a `while` loop containing the **range of lowercase letters** (`'a'` to `'z'`).
- Inside the loop, use an **if condition**:
  - If the condition is met, subtract `32` from the lowercase letter to convert it to uppercase.
  - Otherwise, print the character as is.

---

This document provides structured explanations for **string manipulation using pointers**, focusing on **concatenation, comparison, reversal, and case conversion**. 🚀



---

This document provides structured explanations of **pointers, arrays, and strings**, focusing on **dereferencing, pointer arithmetic, loops, and memory management**. 🚀

