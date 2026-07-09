# 10. Strings

In C, a string is simply an array of characters terminated by a null character `'\0'`.

## Concepts Covered
- Declaring and initializing strings
- Reading strings from user input
- Built-in string functions from `<string.h>`
- Common string manipulation programs (reverse, palindrome check, etc.)

## Files

| File | Description |
|------|--------------|
| `01_string_basics.c` | Declaring and printing strings, understanding `'\0'` |
| `02_string_length_strlen.c` | Using and manually implementing `strlen()` |
| `03_string_copy_concat.c` | `strcpy()` and `strcat()` |
| `04_string_compare.c` | Comparing strings with `strcmp()` |
| `05_string_reverse.c` | Reversing a string manually |
| `06_palindrome_check.c` | Checking if a string reads the same forwards and backwards |
| `07_count_vowels_consonants.c` | Counting vowels and consonants in a string |

## Key Takeaways
- A string literal `"Hello"` is automatically stored as `{'H','e','l','l','o','\0'}`.
- Always leave room in your character array for the null terminator `'\0'`.
- `<string.h>` provides ready-made functions — don't reinvent them in production code,
  but implementing them manually (as we do here) is a great learning exercise.
