# 17. Dynamic Memory Allocation

C allows manual control over memory allocation at runtime using functions
from `<stdlib.h>`, which is essential when the amount of memory needed
isn't known until the program is running.

## Concepts Covered
- `malloc()` — allocate a block of uninitialized memory
- `calloc()` — allocate and zero-initialize memory
- `realloc()` — resize a previously allocated block
- `free()` — release allocated memory back to the system

## Files

| File | Description |
|------|--------------|
| `01_malloc_basics.c` | Dynamically allocating an array with `malloc()` |
| `02_calloc_basics.c` | Allocating zero-initialized memory with `calloc()` |
| `03_realloc_basics.c` | Growing a dynamically allocated array with `realloc()` |
| `04_free_and_dangling_pointers.c` | Proper cleanup and avoiding dangling pointers |

## Key Takeaways
- Every successful `malloc`/`calloc`/`realloc` call should be matched with a `free()`.
- Always check if the returned pointer is `NULL` (allocation can fail).
- After freeing a pointer, set it to `NULL` to avoid accidentally reusing a "dangling pointer".
