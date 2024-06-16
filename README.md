# Text Encryption Easy Program

This program is an exercise in C, designed to imitate FreeCodeCamp's Python exercise number 40. The goal of this exercise is to demonstrate basic text manipulation, memory allocation, and string operations in C by creating a simple text encryption tool.

## Features

- Converts the input text to lowercase.
- Encrypts the text using a Caesar cipher with a shift of 3.
- Handles memory allocation for dynamic strings.

## Usage

1. **Compile the program**:
   ```bash
   gcc -o encrypt_text_easy encrypt_text_easy.c
   ```

2. **Run the program**:
   ```bash
   ./encrypt_text_easy
   ```

3. **Input the text to encrypt**:
   The program will prompt you to enter the text you want to encrypt. After inputting the text, press Enter.

4. **Output**:
   The program will display the original text and the encrypted text.

## Example

```plaintext
Enter text to encrypt: Hello World!
Original txt: Hello World!
Encrypted txt: khoor zruog!
```

## Code Overview

### `to_lowercase(str text)`

This function converts the given text to lowercase using the `tolower` function from the `ctype.h` library.

### `encrypt_text(str text)`

This function performs the encryption using a Caesar cipher with a shift of 3. It:
1. Allocates memory for the encrypted text.
2. Converts the input text to lowercase.
3. Encrypts the text by shifting each letter by 3 positions in the alphabet.
4. Returns the encrypted text.

### `main()`

The main function:
1. Prompts the user to enter the text to encrypt.
2. Reads the input text.
3. Calls `encrypt_text` to encrypt the input text.
4. Displays the original and encrypted texts.
5. Frees the allocated memory for the encrypted text.

## Notes

- The program reads up to 100 characters from the input.
- Memory allocation errors are handled with error messages and program termination.
- The program assumes that the input text is in English and only shifts lowercase alphabetic characters.

## License

This project is for educational purposes and does not include a specific license. Feel free to use and modify it as needed for learning and personal projects.
