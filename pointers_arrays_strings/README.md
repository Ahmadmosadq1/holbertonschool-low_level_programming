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

---

This document provides structured explanations of **pointers, arrays, and strings**, focusing on **dereferencing, pointer arithmetic, loops, and memory management**. 🚀

