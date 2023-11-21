# 0x13. C - More singly linked lists

## Description
### General
* How to use linked lists
* Start to look for the right source of information without too much help
* What are the most common implementations of linked lists

## Mandatory Tasks
### 0. Print list
Write a function that prints all the elements of a `listint_t` list.
* Prototype: `size_t print_listint(const listint_t *h);`
* Return: the number of nodes

```shell
zakaria@ubuntu:~/0x13. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_listint.c -o 0-print_listint
zakaria@ubuntu:~/0x13. More singly linked lists$ ./0-print_listint 
9
8
-> 2 elements
zakaria@ubuntu:~/0x13. More singly linked lists$ 
```

### 1. List length
Write a function that returns the number of elements in a linked `listint_t` list.
* Prototype: `size_t listint_len(const listint_t *h);`

```shell
zakaria@ubuntu:~/0x13. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-listint_len.c -o 1-listint_len
zakaria@ubuntu:~/0x13. More singly linked lists$ ./1-listint_len
-> 2 elements
zakaria@ubuntu:~/0x13. More singly linked lists$ 
```

### 2. Add node
Write a function that adds a new node at the beginning of a `listint_t` list.
* Prototype: `listint_t *add_nodeint(listint_t **head, const int n);`

```shell
zakaria@ubuntu:~/0x13. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_nodeint.c 0-print_listint.c -o 2-add_nodeint
zakaria@ubuntu:~/0x13. More singly linked lists$ ./2-add_nodeint
1024
402
98
4
3
2
1
0
zakaria@ubuntu:~/0x13. More singly linked lists$ 
```

