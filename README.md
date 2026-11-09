# C-3 Programming – Additional Practice Programs

This repository contains three additional C programming practice programs developed to improve problem-solving skills and understand important C programming concepts.

These programs are separate from my main 27-program C Programming Assignment.

## 📌 Programs List

### 1. Second Largest Element in an Array

**File:** `Q1_Second_Largest.c`

**Description:**
A C program that finds and returns the second-largest distinct element from an integer array without sorting the array.

**Concepts Covered:**
- Arrays
- Functions
- For Loop
- If-Else Conditions
- Array Traversal

**Requirements:**
- Sorting is not allowed.
- The array must contain at least two distinct elements.

### 2. Bitwise Operations on an 8-bit Register

**File:** `Q2_Bitwise_Register.c`

**Description:**
A C program that modifies an 8-bit register using bitwise operators.

**Operations:**
- Set the 3rd bit (bit index 2).
- Clear the 6th bit (bit index 5).
- Toggle the 1st bit (bit index 0).

**Concepts Covered:**
- Unsigned Char
- Bitwise OR (`|`)
- Bitwise AND (`&`)
- Bitwise NOT (`~`)
- Bitwise XOR (`^`)
- Bit Shifting (`<<`)

**Requirements:**
- Use bitwise operators for register modification.
- No loops or conditional statements inside the register modification function.

### 3. Star Pyramid Pattern

**File:** `Q3_Star_Pyramid.c`

**Description:**
A C program that prints a pyramid pattern using stars based on the number of rows entered by the user.

**Concepts Covered:**
- Nested For Loops
- Pattern Printing
- User Input
- Loop Control

**Example:**

Input:
```text
Enter the number of rows: 5
```

Output:
```text
*
***
*****
*******
*********
```

## 🛠️ Technologies and Tools

- Programming Language: C
- Compiler: GCC
- Code Editor: Visual Studio Code
- Online Compiler: OnlineGDB

## ▶️ How to Compile and Run

Compile using GCC:

**Question 1**
```bash
gcc -std=c99 Q1_Second_Largest.c -o q1
./q1
```

**Question 2**
```bash
gcc -std=c99 Q2_Bitwise_Register.c -o q2
./q2
```

**Question 3**
```bash
gcc -std=c99 Q3_Star_Pyramid.c -o q3
./q3
```

On Windows, run the generated `.exe` file instead of using `./q1`, `./q2`, or `./q3`.

## 🎯 Purpose

The purpose of these programs is to improve my understanding of C programming, strengthen logical thinking, and gain practical experience with arrays, bitwise operators, functions, and nested loops.

---

**Author:** Shek Barthullah

**Repository:** C-3 Programming Additional Practice
