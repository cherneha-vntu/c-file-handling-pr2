# Practical Work 2: Text and Binary File Handling in C

This project is a practical work for the "Computer Technologies and Programming" course. It contains programs demonstrating file handling in C, focusing on text character replacement and binary file manipulation.

## Programs Included

### 1. Character Replacement in Text File (`task1.c`)

This program reads a text file (`input.txt`), replaces all occurrences of the character '0' with '1' and '1' with '0', and writes the result to a new text file (`output.txt`).

### 2. Insert String in Binary File (`task2.c`)

This program inserts a specific string ("\_INSERT\_") exactly into the middle of a binary file (`data.bin`) without overwriting the existing content. It calculates the file size, reads the content into memory, and rewrites the file with the inserted word.

## How to Compile and Run

To compile and run `task1.c`:
```bash
gcc task1.c -o task1
./task1
```

To compile and run `task2.c`:
```bash
gcc task2.c -o task2
./task2
```

## Example Usage

**Task 1 (`task1.c`)**
```text
$ cat input.txt
Hello 1010
World 0001
Test 1110

$ ./task1
Файл успішно оброблено.

$ cat output.txt
Hello 0101
World 1110
Test 0001
```

**Task 2 (`task2.c`)**
```text
$ printf "HelloWorld" > data.bin
$ cat data.bin
HelloWorld

$ ./task2
Слово успішно вставлено.

$ cat data.bin
Hello_INSERT_World
```

## Contributing

Contributions are welcome and appreciated! Here's how you can contribute:

1. Fork the project
2. Create your feature branch (`git checkout -b feature/AmazingFeature`)
3. Commit your changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

Please make sure to update tests as appropriate and adhere to the existing coding style.

## License

This project is licensed under the CSSM Unlimited License v2.0 (CSSM-ULv2). See the [LICENSE](LICENSE) file for details.
