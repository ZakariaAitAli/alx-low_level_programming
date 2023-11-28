# 0x15. C - File I/O

## Learning Objectives

- Look for the right source of information online
- How to create, open, close, read and write files
- What are file descriptors
- What are the 3 standard file descriptors, what are their purpose and what are their POSIX names
- How to use the I/O system calls open, close, read and write
- What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR
- What are file permissions, and how to set them when creating a file with the open system call
- What is a system call
- What is the difference between a function and a system call

## Tasks

### 0.Tread lightly, she is near `Mandatory`

Write a function that reads a text file and prints it to the POSIX standard output.

- Prototype: `ssize_t read_textfile(const char *filename, size_t letters)`; 
- where letters is the number of letters it should read and print 
- returns the actual number of letters it could read and print 
- if the file can not be opened or read, return `0` 
- if filename is `NULL` return `0` 
- if `write` fails or does not write the expected amount of bytes, return 0

```shell
zakaria@ubuntu:~/0x15. File descriptors and permissions$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-read_textfile.c -o 0-read_textfile
zakaria@ubuntu:~/0x15. File descriptors and permissions$ ./0-read_textfile Requiescat
Requiescat
by Oscar Wilde

Tread lightly, she is near
Under the snow,
Speak gently, she can hear
The daisies grow.
(printed chars: 114)
Requiescat
by Oscar Wilde

Tread lightly, she is near
Under the snow,
Speak gently, she can hear
The daisies grow.

All her bright golden hair
Tarnished with rust,
She that was young and fair
Fallen to dust.

Lily-like, white as snow,
She hardly knew
She was a woman, so
Sweetly she grew.

Coffin-board, heavy stone,
Lie on her breast,
I vex my heart alone,
She is at rest.

Peace, Peace, she cannot hear
Lyre or sonnet,
All my life\'s buried here,
Heap earth upon it.

(printed chars: 468)
zakaria@ubuntu:~/0x15. File descriptors and permissions$
```

### 1.Under the snow `Mandatory`


### 2.Speak gently, she can hear `Mandatory`


### 3.cp `Mandatory`


### 4.elf `Advanced`


