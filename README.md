
# strings.c - Self Implementation of strings.h

![Build Status](https://img.shields.io/badge/build-passing-brightgreen.svg) ![License](https://img.shields.io/badge/license-GNU%20GPL%20v3-blue.svg)

## Introduction

Welcome to `strings.c`! This project contains a self-implementation of the `strings.h` header file, which provides various string manipulation functions. As the famous quote goes, "You don't fully understand something until you build it," So I tried building it.
## Motivation

The motivation behind this project is to enhance our knowledge of C programming and improve our understanding of string handling. By building our own version of the `strings.h` library, we can explore the underlying concepts and algorithms used in these functions.

## Functions Implemented

Below is a list of the functions we have implemented in `strings.c`:

1.  `int str_len()`: Calculates the length of a given string.
2.  `int str_lwr()`: Converts a string to lowercase.
3.  `int str_upr()`: Converts a string to uppercase.
4.  `int str_cmp()`: Compares two strings (ASCII Difference) and calculates the difference.
5.  `int str_cat()`: Concatenates two strings.

## Functions To Be Implemented (TO-DO)

The following functions are yet to be implemented:

1.  `char *str_cpy(char *dest, const char *src)`: Copies the contents of one string to another.
2.  `char *str_chr(const char *str, int c)`: Locates the first occurrence of a character in a string.
3.  `char *str_str(const char *haystack, const char *needle)`: Finds the first occurrence of a sub string in a string.

## How to Use

To use the functions provided by `strings.c`, follow these steps:

1.  Clone the repository:

```bash
git clone https://github.com/your-username/strings.c.git
cd strings.c
``` 

2.  Compile your program along with `strings.c`:

```bash
gcc -o strings strings.c
```

3.  Run the binary:
```bash
./strings
```
## Contributing 

If you have ideas for the missing string manipulation functions or find any bugs, feel free to open an issue or submit a pull request.

# You don't fully understand something until you build it." - Anonymous 

