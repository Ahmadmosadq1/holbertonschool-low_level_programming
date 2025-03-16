# **C Programming Exercises**

## **0. Preprocessor**
### **Description:**
This command will proccess the c file by deleting unrelated to complilation lines like comments.
It is done with -E flag.

### **Command:**
```bash
#!/bin/bash
gcc -E $CFILE -o c
```

---

## **1. Compile Without Linking**
### **Description:**
Write a script that compiles a C file but does not link.
- The C file name will be saved in the variable `$CFILE`.
- The output file should be named the same as the C file but with the extension `.o` instead of `.c`.
- Example: If the C file is `main.c`, the output file should be `main.o`.
- If you want to replace a file extension like from `main.c` to `main.o`, we can use the below code.
- If inside `${}`, it will be `"main"`, but `$CFILE` will not change.
- It is like taking the hat off when inside a place `{}` and wearing it back when leaving `{}`.

### **Code:**
```bash
gcc -c "$CFILE" -o "${CFILE%.c}.o"
```

---

## **2. Assembly Generation**
### **Description:**
Write a script that generates the assembly code of a C file and saves it in an output file.
- The C file name will be saved in the variable `$CFILE`.
- The output file should be named the same as the C file but with the extension `.s` instead of `.c`.
- Example: If the C file is `main.c`, the output file should be `main.s`.
- To compile a C file into assembly without linking, we use the `-S` flag (capital letter).

### **Code:**
```bash
gcc -S "$CFILE" -o "${CFILE%.c}.s"
```

---

## **3. Creating an Executable Named "cisfun"**
### **Description:**
Write a script that compiles a C file and creates an executable named `cisfun`.
- The C file name will be saved in the variable `$CFILE`.
- Now we compile with linking. The file `cisfun` is executable now.
- The `-c` flag will not make the file executable. Only `gcc` without any flags will completely turn it into an executable.

### **Code:**
```bash
gcc -pie $CFILE -o cisfun
```

---

## **4. Hello, puts**
### **Description:**
Create a C file that prints a string using the `puts` function.

### **Code:**
```c
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This function prints a string using puts.
 * Return: Always 0 (Success)
 */
int main(void)
{
    puts("\"Programming is like building a multilingual puzzle");
    return (0);
}
```

---

## **5. Hello, printf**
### **Description:**
Write a C program that prints exactly:
> *"with proper grammar, but the outcome is a piece of art,"*
- Followed by a new line.
- Use the function `printf`.
- You are not allowed to use the function `puts`.
- Your program should return `0`.
- Your program should compile without warnings when using the `-Wall` gcc option.
- Always make sure you update your compiler when you edit the C file.

### **Ways to Print a String with a New Line:**
1. `printf("string\n");`
2. `printf("string")` followed by `printf("\n")`.
3. `printf("%s\n", "string");`

---

## **6. Size is Not Grandeur, and Territory Does Not Make a Nation**
### **Description:**
Write a C program that prints the size of various types on the computer it is compiled and run on.
- You should produce the exact same output as in the example.
- Warnings are allowed.
- Your program should return `0`.
- If you are using Linux on Vagrant, you might have to install the package `libc6-dev-i386` to test the `-m32` gcc option (normally, you don't need to do anything on your sandbox).

- We are running a script that identifies the sizes of different data types in both 32-bit and 64-bit.

### **Code:**
```bash
gcc 6-size.c -m32 -o size32 2> /tmp/32
gcc 6-size.c -m64 -o size64 2> /tmp/64
```

---

## **C Data Types & Their Format Specifiers**
| Type | Size (in bytes) | Range (32-bit system) | Format Specifier (printf) | Format Specifier (scanf) |
|------|---------------|---------------------|----------------------|----------------------|
| `char` | 1 byte | -128 to 127 | `%c` | `%c` |
| `signed char` | 1 byte | -128 to 127 | `%c` or `%hhd` | `%hhd` |
| `unsigned char` | 1 byte | 0 to 255 | `%c` or `%hhu` | `%hhu` |
| `short / short int` | 2 bytes | -32,768 to 32,767 | `%hd` | `%hd` |
| `unsigned short / unsigned short int` | 2 bytes | 0 to 65,535 | `%hu` | `%hu` |
| `int` | 4 bytes | -2,147,483,648 to 2,147,483,647 | `%d` or `%i` | `%d` or `%i` |
| `unsigned int` | 4 bytes | 0 to 4,294,967,295 | `%u` | `%u` |
| `long / long int` | 4 bytes | -2,147,483,648 to 2,147,483,647 | `%ld` | `%ld` |
| `unsigned long / unsigned long int` | 4 bytes | 0 to 4,294,967,295 | `%lu` | `%lu` |
| `long long / long long int` | 8 bytes | -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 | `%lld` | `%lld` |
| `unsigned long long / unsigned long long int` | 8 bytes | 0 to 18,446,744,073,709,551,615 | `%llu` | `%llu` |
| `float` | 4 bytes | ±3.4E-38 to ±3.4E+38 | `%f` | `%f` |
| `double` | 8 bytes | ±1.7E-308 to ±1.7E+308 | `%lf` | `%lf` |
| `long double` | 12-16 bytes | ±3.4E-4932 to ±1.1E+4932 | `%Lf` | `%Lf` |
| `void` | 0 bytes | No values (used for functions) | N/A | N/A |

---

✅ This document provides a structured guide to compiling, assembling, and executing C programs along with basic concepts. 🚀
