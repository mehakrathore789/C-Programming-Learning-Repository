# 02. Data Types

C is a statically typed language — every variable must have a declared data type.
This section covers the primitive data types and how to convert between them.

## Subfolders

| Folder | Description |
|--------|--------------|
| [Integer](./Integer) | `int`, `short`, `long`, `unsigned` and their ranges |
| [Float](./Float) | Single-precision floating-point numbers |
| [Char](./Char) | Character type and ASCII values |
| [Double](./Double) | Double-precision floating-point numbers |
| [Type_Conversion](./Type_Conversion) | Implicit and explicit (casting) type conversion |

## Key Takeaways
- `sizeof()` tells you how many bytes a type occupies on your system.
- Integer types can be `signed` (default) or `unsigned`.
- `float` gives ~6-7 significant digits; `double` gives ~15-16.
- Mixing types in expressions triggers implicit conversion — know the rules to avoid bugs.
