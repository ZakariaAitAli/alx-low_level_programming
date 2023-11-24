# 0x14. C - Bit manipulation

## Learning Objectives

- Look for the right source of information without too much help
- How to manipulate bits and use bitwise operators

## Tasks

### 0. 0

Write a function that converts a binary number to an `unsigned int`.

- Prototype: `unsigned int binary_to_uint(const char *b);`
- where `b` is pointing to a string of `0` and `1` chars
- Return: the converted number, or `0` if
  - there is one or more chars in the string `b` that is not `0` or `1`
  - `b` is `NULL`

```shell
zakaria@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-binary_to_uint.c -o 0-binary_to_uint
zakaria@ubuntu:~/0x14. Binary$ ./0-binary_to_uint
1
5
0
98
402
zakaria@ubuntu:~/0x14. Binary$
```

