# 11. Pointers

A pointer is a variable that stores the **memory address** of another variable.
Pointers are one of C's most powerful (and initially confusing) features.

## Concepts Covered
- Pointer basics (`&` address-of, `*` dereference)
- Pointer arithmetic
- Pointers and arrays
- Pointers and functions (call by reference)
- Double pointers (pointer to a pointer)
- Function pointers

## Files

| File | Description |
|------|--------------|
| `01_pointer_basics.c` | Declaring a pointer and dereferencing it |
| `02_pointer_arithmetic.c` | Incrementing/decrementing pointers |
| `03_pointers_and_arrays.c` | How array names decay into pointers |
| `04_pointers_and_functions.c` | Modifying a caller's variable via a pointer |
| `05_double_pointers.c` | A pointer that stores the address of another pointer |
| `06_function_pointers.c` | A pointer that stores the address of a function |

## Key Takeaways
- `&variable` gives you the address of `variable`.
- `*pointer` dereferences a pointer — gives you the value stored at that address.
- An array name, when used in an expression, decays into a pointer to its first element.
- Always initialize pointers; an uninitialized ("wild") pointer can crash your program.
