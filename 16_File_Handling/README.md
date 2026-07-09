# 16. File Handling

C provides the `<stdio.h>` `FILE` API to read from and write to files on disk,
allowing programs to persist data beyond a single execution.

## Concepts Covered
- Opening/closing files with `fopen()` / `fclose()`
- Writing to files (`fprintf`, `fputs`)
- Reading from files (`fscanf`, `fgets`)
- Appending to existing files
- Basic binary file I/O (`fwrite` / `fread`)

## Files

| File | Description |
|------|--------------|
| `01_write_to_file.c` | Creating a file and writing text to it |
| `02_read_from_file.c` | Reading text content back from a file |
| `03_append_to_file.c` | Adding new content without overwriting existing data |
| `04_binary_file_io.c` | Writing and reading raw struct data in binary mode |

## Key Takeaways
- Always check if `fopen()` returned `NULL` before using the file pointer.
- Always call `fclose()` when done, to flush buffers and release resources.
- File modes: `"r"` read, `"w"` write (overwrite), `"a"` append, `"rb"`/`"wb"` binary.
