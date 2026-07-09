# 13. Structures

A `struct` groups related variables of different types under a single name.

## Concepts Covered
- Defining and using structures
- Nested structures (a struct inside another struct)
- Arrays of structures
- Pointers to structures

## Files

| File | Description |
|------|--------------|
| `01_struct_basics.c` | Defining a struct and accessing its members |
| `02_nested_structures.c` | A structure containing another structure |
| `03_array_of_structures.c` | Storing multiple records using an array of structs |
| `04_struct_pointers.c` | Accessing struct members through a pointer (`->` operator) |

## Key Takeaways
- Use the `.` operator to access members of a normal struct variable.
- Use the `->` operator to access members through a pointer to a struct.
- `typedef struct {...} Name;` lets you use `Name` directly instead of `struct Name`.
