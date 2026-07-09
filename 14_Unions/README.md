# 14. Unions

A `union` is similar to a `struct`, but all its members share the SAME memory
location. This means a union can hold only one member's value at a time,
and its size equals the size of its largest member.

## Files

| File | Description |
|------|--------------|
| `01_union_basics.c` | Declaring and using a union |
| `02_union_vs_structure.c` | Comparing memory usage between struct and union |

## Key Takeaways
- Writing to one union member overwrites the memory used by the others.
- `sizeof(union)` = size of its largest member; `sizeof(struct)` = sum of all members (plus padding).
- Unions are useful for memory-constrained systems or when you know only one field is needed at a time.
