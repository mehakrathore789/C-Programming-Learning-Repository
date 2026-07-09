# 12. Recursion

Recursion is when a function calls itself to solve a smaller instance of the same problem.

## Concepts Covered
- Base case and recursive case
- Recursive vs iterative solutions
- Classic recursion problems

## Files

| File | Description |
|------|--------------|
| `01_factorial.c` | Factorial of a number using recursion |
| `02_fibonacci.c` | Fibonacci series using recursion |
| `03_gcd.c` | Greatest Common Divisor using the Euclidean algorithm |
| `04_sum_of_digits.c` | Sum of digits of a number using recursion |
| `05_tower_of_hanoi.c` | The classic Tower of Hanoi puzzle |

## Key Takeaways
- Every recursive function MUST have a **base case** to stop, or it will recurse forever
  (leading to a stack overflow).
- Each recursive call has its own copy of local variables, stored on the call stack.
- Recursion is often more elegant but can be less memory-efficient than an iterative loop.
