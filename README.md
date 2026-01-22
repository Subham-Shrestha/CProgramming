# C Programming Assignments - Semester 1

This repository contains various C programming exercises and assignments completed during Semester 1. It serves as a collection of basic to intermediate C programs for learning and reference.

> Updated: 2026-01-22 — README refreshed with push instructions.

## Files Overview

### Array.c
Comprehensive demonstration of array concepts in C, including:
- Array initialization and declaration
- Accessing array elements with proper indexing
- Using loops to iterate through arrays
- Examples of one-dimensional arrays with user input and output
- Array bounds and garbage values when accessing out-of-bounds indices
- Programs included:
  - Printing marks of 5 subjects using loops
  - Taking input for marks of 5 students and displaying them
  - Calculating total marks of 5 subjects
  - Printing array elements in reverse order
  - Finding sum of elements at even indices
  - Finding the smallest element in a user-defined size array
  - Finding the greatest element in an array
  - Finding the average of 8 numbers
  - Finding the second largest element in an array
  - Selection sort in ascending order with pass printing
  - Selection sort in descending order with pass printing
  - Multidimensional (2D) array input and output (currently active)
  - Finding the greatest element in an array
  - Finding the average of 8 numbers

### Check.c
Contains programs for various checking operations:
- Checking if a number is even or odd
- Verifying multiples of specific numbers
- Basic conditional logic exercises

### ClassAssignment1.c
A collection of small programs covering fundamental concepts:
- Checking if a number is even or odd
- Determining multiples of 5
- Checking multiples of 2 and 3
- Identifying positive, negative, or zero numbers
- Basic input/output and conditional statements

### ControlStat.c
Focuses on control structures in C:
- If-else statements
- Switch-case statements
- Loops (for, while, do-while)
- Nested conditions

### Day1.c
Basic C programs from the first day of learning:
- Hello World program
- Simple input/output operations
- Basic variable declarations and usage

### Getchar.c
Demonstrates character input functions:
- Using getchar() for single character input
- Character manipulation
- Basic I/O with characters

### LabReport1.c
First lab report programs, now updated to run all programs sequentially:
- Hello World
- Simple interest calculation
- Variable swapping
- String input and display
- Area of circle calculation
- Sum without using + operator
- Fahrenheit to Celsius conversion

### LabReport2.c
Second lab report with more complex programs, now updated to run all programs sequentially:
- Time greeting using if-else and switch-case
- Leap year checking
- Area calculator (circle, rectangle, triangle)
- Even/odd checking without else
- Character type checking (alphabet, digit, special)
- Calculator using switch-case
- Uppercase/lowercase checking

### LapReport3.c
Collection of various C programs demonstrating different concepts:
- Printing odd numbers from 1 to 50
- Calculating sum of even numbers from 1 to n
- Counting digits in a number
- Checking if a number is prime
- Printing all prime numbers up to n
- Checking if a number is palindrome
- Printing star patterns
- Printing odd number patterns
- Printing number pyramid patterns (currently active program)

### OneChar.c
Programs dealing with single character operations:
- Character input and output
- ASCII value manipulations
- Character-based logic

### String.c
String manipulation programs:
- String input and output
- Basic string operations
- Character array handling

### Test.c
Test programs for various concepts:
- Debugging exercises
- Small test cases
- Verification of code snippets

### calculator_switch.c
A simple calculator program using switch-case:
- Basic arithmetic operations (addition, subtraction, multiplication, division)
- User input for numbers and operations
- Switch-case implementation for menu-driven calculator

## How to Compile and Run

To compile any C file, use:
```
gcc -Wall -Wextra -g3 filename.c -o output/filename
```

To run the executable:
```
./output/filename
```

## How to Push This Repo to GitHub

1. Ensure a remote is configured (replace URL with your repository):

```
git remote add origin git@github.com:your-username/your-repo.git
```

2. Commit any local changes and push the current branch:

```
git add README.md
git commit -m "Update README"
git push -u origin $(git rev-parse --abbrev-ref HEAD)
```

If you prefer HTTPS, use the HTTPS remote URL instead of the SSH URL.

## Learning Objectives

This collection covers:
- Basic syntax and structure of C programs
- Variables, data types, and operators
- Control structures (if-else, loops, switch)
- Arrays and strings
- Functions and modular programming
- Input/output operations
- Basic algorithms and problem-solving

## Contributing

Feel free to suggest improvements or add more programs to enhance the learning experience.

## License

This repository is for educational purposes.
