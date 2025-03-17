# File Operations in C

This is a simple C program that demonstrates basic file operations such as writing, appending, and reading a file using the `stdio.h` library.

## Features
- Write data to a file (`example.txt`)
- Append new data to the file
- Read and display file contents

## How to Use
1. Compile the program using a C compiler (e.g., `gcc`).
    ```bash
    gcc file_operations.c -o file_operations
    ```
2. Run the compiled executable.
    ```bash
    ./file_operations
    ```
3. Choose an option from the menu:
    - `1` to write to the file (overwrites existing content)
    - `2` to append data to the file
    - `3` to read and display file contents
    - `4` to exit the program

## Code Structure
- `writeToFile()`: Writes data to `example.txt`, overwriting previous content.
- `appendToFile()`: Appends new data to `example.txt` without removing existing content.
- `readFromFile()`: Reads and prints the content of `example.txt`.

## Example Output
```
File Operations:
1. Write to File
2. Append to File
3. Read from File
4. Exit
Enter your choice: 1
Data written to file successfully.

Enter your choice: 3
File contents:
Hello, this is a test file.
```

## License
This project is open-source and available under the MIT License.

## Author
- GitHub: [Your GitHub Username](https://github.com/TechieRS)

Feel free to contribute or report issues!

