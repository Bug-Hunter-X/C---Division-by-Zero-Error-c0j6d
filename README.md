# C++ Division by Zero Error

This repository demonstrates a common error in C++ programming: division by zero. The code attempts to divide an integer by zero, which leads to undefined behavior and often crashes the program.

## Bug Description
The `main` function declares three integer variables: `x`, `y`, and `z`.  `x` is initialized to 5, and `y` is initialized to 0. The code then attempts to assign the result of `x / y` to `z`. This results in a division by zero error.

## Bug Solution
The solution involves adding input validation to check if the divisor (`y`) is zero before performing the division. If it is, an appropriate error message is displayed, or alternative actions are taken to avoid the error.
