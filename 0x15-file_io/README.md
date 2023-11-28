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

Create a function that creates a file.

- Prototype: `int create_file(const char *filename, char *text_content);`
- where `filename` is the name of the file to create and `text_content` is a `NULL` terminated string to write to the file
- Returns: `1` on success, `-1` on failure (file can not be created, file can not be written, `write` “fails”, etc…)
- The created file must have those permissions: `rw-------`. If the file already exists, do not change the permissions.
- if the file already exists, truncate it
- if `filename` is `NULL` return `-1`
- if `text_content` is `NULL` create an empty file

```shell
zakaria@ubuntu:~/0x15. File descriptors and permissions$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-create_file.c -o 1-create_file
zakaria@ubuntu:~/0x15. File descriptors and permissions$ ./1-create_file hello world
-> 1)
zakaria@ubuntu:~/0x15. File descriptors and permissions$ ls -l hello
-rw------- 1 zakaria zakaria 5 Dec  1 14:00 hello
zakaria@ubuntu:~/0x15. File descriptors and permissions$ cat hello
worldzaka@ubuntu:~/0x15. File descriptors and permissions$
```

### 2.Speak gently, she can hear `Mandatory`


### 3.cp `Mandatory`


### 4.elf `Advanced`


