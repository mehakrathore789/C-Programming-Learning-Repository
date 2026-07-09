# 08. Functions

Functions let you break a program into small, reusable, named blocks of code.

## Concepts Covered
- Function declaration, definition, and calling
- Parameters and arguments
- Return values
- Call by value vs call by reference (using pointers)
- Storage classes (`auto`, `static`, `extern`, `register`)
- Recursion is covered in depth in [12_Recursion](../12_Recursion)

## Files

| File | Description |
|------|--------------|
| `01_function_basics.c` | Declaring, defining, and calling a function |
| `02_function_with_parameters.c` | Passing arguments into a function |
| `03_return_values.c` | Returning a value from a function |
| `04_call_by_value_vs_reference.c` | The difference between passing a copy vs an address |
| `05_storage_classes.c` | auto, static, extern, register keywords |

## Key Takeaways
- A function must be declared (prototype) before it's used, or defined above `main()`.
- C passes arguments **by value** by default — use pointers to modify the caller's variable.
- `static` local variables retain their value between function calls.
