# **Project: C - Functions, Nested Loops**

## **Task 0: _putchar**

### **Description:**
Write a program that prints `_putchar`, followed by a new line.

### **Solution:**
- The goal of this task is to understand **header files** (files with `.h` extension). When using multiple user-defined functions, it is better to place them in one file and call them when needed.
- In this example, a function `_putchar.c` exists in a C file. Its function prototype `{int _putchar();}` is added to a header file called `main.h`.
- The main script (`0-putchar.c`) includes the header file `main.h` and both the C function file and the main script must be compiled together.

---

## **Task 1: Print Alphabet**

### **Description:**
Write a function that prints the alphabet in lowercase, followed by a new line.

### **Solution:**
- The function `print_alphabet(void);` is defined as a **void function**, meaning it takes no arguments.
- The function runs in `1-main.c` by calling it without arguments and printing the alphabet.
- The function uses `_putchar` with a `for` loop, and its prototype is included in `main.h`.
- The main script and header file must be included, but `1-main.c` is not necessary.
- Since `_putchar()` is used, `main.h` must be included in `1-print_alphabet.c`.

---

## **Task 2: Print Alphabet 10 Times**

### **Description:**
Write a function that prints the alphabet **10 times** in lowercase, followed by a new line.

### **Solution:**
- Use a **for loop** to iterate through the alphabet from `a` to `z`.
- Use a **while loop** to print the alphabet **10 times**.
- If `alpha == 'z'`, print `\n` and continue the loop; otherwise, continue printing.

---

## **Task 3: Check for Lowercase Characters**

### **Description:**
Write a function that checks if a character is lowercase.

### **Solution:**
- The function prototype is `int _islower(int c);`.
- Returns `1` if `c` is a **lowercase letter**, otherwise returns `0`.
- Uses an **if statement** to check if `c` falls within the range of lowercase letters (`a` to `z`).
- If `c` is an uppercase letter (`A` to `Z`), return `0`.

---

## **Task 4: Check for Alphabetic Characters**

### **Description:**
Write a function that checks if a character is **alphabetic** (either uppercase or lowercase).

### **Solution:**
- The function prototype is `int _isalpha(int c);`.
- Returns `1` if `c` is a **letter** (uppercase or lowercase), otherwise returns `0`.
- Uses an **if statement** to check if `c` falls within the ranges of `a-z` or `A-Z`.

---

## **Task 5: Check for Uppercase Characters**

### **Description:**
Write a function that checks if a character is uppercase.

### **Solution:**
- Returns `1` if the character is uppercase (`A-Z`), otherwise returns `0`.
- Uses an **if statement** to check the range of uppercase letters.

---

## **Task 6: Multiply Two Numbers**

### **Description:**
Write a function that multiplies two numbers.

### **Solution:**
- Create a function that takes two integers as parameters and returns their product.
- The function is called from `2-main.c` to perform multiplication.

---

## **Task 7: Print Numbers 0-9**

### **Description:**
Write a function that prints numbers from `0` to `9` using `_putchar`.

### **Solution:**
- Use a `for` loop to iterate from `0` to `9`.
- Print each number using `_putchar`.

---

## **Task 8: Print Numbers Except 2 and 4**

### **Description:**
Write a function that prints numbers from `0` to `9`, excluding `2` and `4`.

### **Solution:**
- Use a `for` loop to iterate from `0` to `9`.
- Use an **if statement** to skip printing `2` and `4`.

---

## **Task 9: Print Numbers 0-14 Ten Times**

### **Description:**
Write a function that prints numbers from `0` to `14`, ten times.

### **Solution:**
- Use **nested loops**:
  - An outer loop for **ten iterations**.
  - An inner loop to print numbers from `0` to `14`.
- For numbers greater than `9`, extract the **tens digit** using `num / 10` and the **ones digit** using `num % 10`.

---

## **Task 10: Print a Line of Underscores**

### **Description:**
Write a function that prints `_` a specified number of times.

### **Solution:**
- Use a loop to print `_` exactly `n` times, where `n` is the parameter passed to the function.
- If `n = 4`, the loop prints `_` four times.
- Use a counter variable to track iterations.

---

This document provides a structured guide to **C functions and nested loops**, including tasks focused on **character checking, loops, conditionals, and simple arithmetic functions**. 🚀

