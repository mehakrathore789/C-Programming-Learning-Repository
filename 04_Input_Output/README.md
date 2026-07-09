# 04. Input / Output

C provides several functions for reading input from the user and displaying output.

## Concepts Covered
- `printf()` and `scanf()` — formatted output/input
- `getchar()` and `putchar()` — single character I/O
- `fgets()` as a safer alternative to `gets()` for reading strings
- Common format specifiers (`%d`, `%f`, `%c`, `%s`, `%lf`, etc.)

## Files

| File | Description |
|------|--------------|
| `01_printf_basics.c` | Formatted output basics |
| `02_scanf_basics.c` | Reading input from the keyboard |
| `03_getchar_putchar.c` | Reading/writing a single character |
| `04_format_specifiers.c` | Cheat-sheet style demo of common format specifiers |
| `05_safe_string_input.c` | Reading a full line of text safely with `fgets()` |

## Key Takeaways
- Always pass the **address** of a variable to `scanf()` using `&`, except for strings/arrays.
- `gets()` is unsafe and removed from modern C standards — prefer `fgets()`.
- Mismatched format specifiers (e.g., `%d` for a `float`) cause undefined behavior.
