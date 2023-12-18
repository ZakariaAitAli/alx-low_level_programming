# 0x16. C - Simple Shell

## Description
This project is a simple UNIX command interpreter that replicates functionalities of the simple shell (sh).

## Compilation
Files are compiled this way:
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```

## Usage
To start the shell in interactive mode:
```
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```
To start the shell in non-interactive mode:
```
$ echo "ls -l" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$
```

