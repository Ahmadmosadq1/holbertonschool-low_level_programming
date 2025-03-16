# **Project: C - Variables, if, else, while**

## **Task 0: Positive or Negative**
### **Description:**
This program assigns a random number to the variable `n` each time it is executed. The goal is to determine whether the number is **positive, negative, or zero** and print the result accordingly.

### **Solution:**
- Use an **if statement** to check the value of `n`.
- If `n > 0`, print that the number is **positive**.
- If `n == 0`, print that the number is **zero**.
- If `n < 0`, print that the number is **negative**.

---

## **Task 1: The Last Digit**
### **Description:**
This program assigns a random number to `n` and determines its **last digit**. The output should indicate whether the last digit is:
- Greater than **5**.
- **0**.
- Less than **6** and not **0**.

### **Solution:**
- To get the last digit of an integer, use the **modulus operator (`%`)**.
- Then, use **if statements** to check the conditions and print the appropriate message.

---

## **Task 2: Printing the Alphabet in Lowercase**
### **Description:**
Write a program that prints the **alphabet in lowercase**, followed by a new line.

### **Requirements:**
- Use the `putchar` function (no `printf`, `puts`, etc.).
- The program should use `putchar` **twice** only.
- All code must be inside the `main` function.

### **Solution:**
- Use a **while loop** to iterate from `a` to `z` and print each character.
- Ensure the loop terminates correctly after printing `z`.

---

## **Task 3: Alphabet in Lowercase and Uppercase**
### **Description:**
Write a program that prints the **alphabet in lowercase first**, then in **uppercase**, followed by a new line.

### **Requirements:**
- Use the `putchar` function (no `printf`, `puts`, etc.).
- The program should use `putchar` **three times** only.
- All code must be inside the `main` function.

### **Solution:**
- Use **one loop** to print lowercase letters.
- When the lowercase loop completes, **use another loop** to print uppercase letters.

---

## **Task 4: Print Alphabet Except 'q' and 'e'**
### **Description:**
Write a program that prints the **alphabet in lowercase**, except the letters `q` and `e`.

### **Requirements:**
- Use the `putchar` function (no `printf`, `puts`, etc.).
- The program should use `putchar` **twice** only.
- All code must be inside the `main` function.

### **Solution:**
- Use a **while loop** to iterate through `a-z`.
- Use an **if statement** inside the loop to **skip 'q' and 'e'**.

---

## **Task 5: Print Numbers 0-9**
### **Description:**
Write a program that prints all **single-digit numbers (0-9)** of base 10, followed by a new line.

### **Requirements:**
- All code must be inside the `main` function.

### **Solution:**
- Use an **integer variable** initialized to `0`.
- Use a **while loop** to iterate through numbers `0-9`.

---

## **Task 6: Print Numbers Using putchar**
### **Description:**
Write a program that prints all **single-digit numbers (0-9)** of base 10 using only `putchar`, followed by a new line.

### **Requirements:**
- **No variables of type `char`** are allowed.
- Use `putchar` **twice** only.
- All code must be inside the `main` function.

### **Solution:**
- The `putchar` function only prints characters, so we must **convert integers to characters** by adding `'0'` to them.
- Use a **while loop** to iterate from `0` to `9`, adding `'0'` before printing.

---

## **Task 7: Print Alphabet in Reverse**
### **Description:**
Write a program that prints the **alphabet in lowercase, in reverse order**, followed by a new line.

### **Requirements:**
- Use the `putchar` function (no `printf`, `puts`, etc.).
- The program should use `putchar` **twice** only.
- All code must be inside the `main` function.

### **Solution:**
- Start with a variable initialized to `'z'`.
- Use a **while loop** that decrements the variable until `'a'`.

---

## **Task 8: Print Hexadecimal Numbers**
### **Description:**
Write a program that prints **all numbers of base 16 in lowercase**, followed by a new line.

### **Requirements:**
- Use the `putchar` function (no `printf`, `puts`, etc.).
- The program should use `putchar` **three times** only.
- All code must be inside the `main` function.

### **Solution:**
- This task does not **directly print hexadecimal numbers** but instead:
  - **First prints digits (0-9).**
  - **Then prints letters (a-f) using another loop.**

---

This document provides a structured guide to **basic C programming exercises** focused on variables, loops, and conditional statements. 🚀


