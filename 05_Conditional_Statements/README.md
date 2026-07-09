# 05. Conditional Statements

Conditional statements let a program make decisions and execute different
code paths based on whether a condition is true or false.

## Concepts Covered
- `if` statement
- `if-else` statement
- `else if` ladder
- Nested `if-else`
- `switch-case` statement

## Files

| File | Description |
|------|--------------|
| `01_if_statement.c` | Executes code only when a condition is true |
| `02_if_else_statement.c` | Two-way decision making |
| `03_else_if_ladder.c` | Multiple conditions checked in sequence |
| `04_nested_if_else.c` | An if-else inside another if-else |
| `05_switch_case.c` | Multi-way branching based on a single value |

## Key Takeaways
- `switch` only works with integer/character/enum values, not floats or strings.
- Don't forget `break;` in each `case`, or execution "falls through" to the next case.
- Prefer `else if` ladders over deeply nested `if` for readability.
