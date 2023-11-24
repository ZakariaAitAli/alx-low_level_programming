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

### 1. 1

Write a function that prints the binary representation of a number.

- Prototype: `void print_binary(unsigned long int n);`
- Format: see example
- You are not allowed to use arrays
- You are not allowed to use `malloc`
- You are not allowed to use the `%` or `/` operators

```shell
zakaria@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-print_binary.c _putchar.c -o 1-print_binary
zakaria@ubuntu:~/0x14. Binary$ ./1-print_binary
0
1
1100010
10000000000
10000000001
zakaria@ubuntu:~/0x14. Binary$
```

### 2. 10

Write a function that returns the value of a bit at a given index.

- Prototype: `int get_bit(unsigned long int n, unsigned int index);`
- where `index` is the index, starting from `0` of the bit you want to get
- Returns: the value of the bit at index `index` or `-1` if an error occured

```shell
zakaria@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-get_bit.c -o 2-get_bit
zakaria@ubuntu:~/0x14. Binary$ ./2-get_bit
1
1
0
zakaria@ubuntu:~/0x14. Binary$
```

### 3. 11

Write a function that sets the value of a bit to `1` at a given index.

- Prototype: `int set_bit(unsigned long int *n, unsigned int index);`
- where `index` is the index, starting from `0` of the bit you want to set
- Returns: `1` if it worked, or `-1` if an error occurred

```shell
zakaria@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra 3-main.c 3-set_bit.c -o 3-set_bit
zakaria@ubuntu:~/0x14. Binary$ ./3-set_bit
1056
1024
99
zakaria@ubuntu:~/0x14. Binary$
```

### 4. 100

Write a function that sets the value of a bit to `0` at a given index.

- Prototype: `int clear_bit(unsigned long int *n, unsigned int index);`
- where `index` is the index, starting from `0` of the bit you want to set
- Returns: `1` if it worked, or `-1` if an error occurred

```shell
zakaria@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra 4-main.c 4-clear_bit.c -o 4-clear_bit
zakaria@ubuntu:~/0x14. Binary$ ./4-clear_bit
0
0
96
zakaria@ubuntu:~/0x14. Binary$
```

