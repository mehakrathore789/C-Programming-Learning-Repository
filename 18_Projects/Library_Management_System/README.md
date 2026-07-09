# Library Management System (File-Based)

A console application that manages a small library's book records,
persisting them to a file (`library.dat`) so data survives between runs.

## Concepts Used
- Structures
- File handling (binary read/write)
- Functions
- Loops and conditionals

## How to Run
```bash
gcc library_management.c -o library_management
./library_management
```

Every time you add a book, it's appended to `library.dat` in binary format.
Viewing all books reads directly from that file, so your data persists
even after you close and reopen the program.
