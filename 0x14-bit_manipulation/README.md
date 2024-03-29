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

### 5. 101

Write a function that returns the number of bits you would need to flip to get from one number to another.

- Prototype: `unsigned int flip_bits(unsigned long int n, unsigned long int m);`
- You are not allowed to use the `%` or `/` operators

```shell
zakaria@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra 5-main.c 5-flip_bits.c -o 5-flip_bits
zakaria@ubuntu:~/0x14. Binary$ ./5-flip_bits
2
5
3
1
zakaria@ubuntu:~/0x14. Binary$
```

### 6. Endianness

Write a function that checks the endianness.

- Prototype: `int get_endianness(void);`
- Returns: `0` if big endian, `1` if little endian

```shell
zakaria@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra 100-main.c 100-get_endianness.c -o 100-get_endianness
zakaria@ubuntu:~/0x14. Binary$ ./100-get_endianness
Little Endian
zakaria@ubuntu:~/0x14. Binary$ lscpu | head
Architecture:                       x86_64
CPU op-mode(s):                     32-bit, 64-bit
Address sizes:                      39 bits physical, 48 bits virtual
Byte Order:                         Little Endian
CPU(s):                             8
On-line CPU(s) list:                0-7
Vendor ID:                          GenuineIntel
Model name:                         Intel(R) Core(TM) i5-1035G1 CPU @ 1.00GHz
CPU family:                         6
Model:                              126
zakaria@ubuntu:~/0x14. Binary$
```

### 7. Crackme3

Find the password for [this program](https://github.com/alx-tools/0x13.c.git).

- Save the password in the file `101-password`
- Your file should contain the exact password, no new line, no extra space
- Hint: The program prints “Congratulations!” when the password is correct

```shell
zakaria@ubuntu:~/0x14. Binary$ ./crackme3 `cat 101-password`
Congratulations!
zakaria@ubuntu:~/0x14. Binary$
```
