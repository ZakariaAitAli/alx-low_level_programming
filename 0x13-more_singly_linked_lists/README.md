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

### 3. Add node at the end
Write a function that adds a new node at the end of a `listint_t` list.
* Prototype: `listint_t *add_nodeint_end(listint_t **head, const int n);`

```shell
zakaria@ubuntu:~/0x13. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-add_nodeint_end.c 0-print_listint.c -o 3-add_nodeint_end
zakaria@ubuntu:~/0x13. More singly linked lists$ ./3-add_nodeint_end
0
1
2
3
4
98
402
1024
zakaria@ubuntu:~/0x13. More singly linked lists$ 
```

### 4. Free list
Write a function that frees a `listint_t` list.
* Prototype: `void free_listint(listint_t *head);`

```shell
zakaria@ubuntu:~/0x13. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 3-add_nodeint_end.c 0-print_listint.c 4-free_listint.c -o 4-free_listint
zakaria@ubuntu:~/0x13. More singly linked lists$ valgrind ./4-free_listint
==3221== Memcheck, a memory error detector
==3221== Copyright (C)
==3221== Command: ./4-free_listint
==3221==
0
1
2
3
4
98
402
1024
==3221==
==3221== HEAP SUMMARY:
==3221==     in use at exit: 0 bytes in 0 blocks
==3221==   total heap usage: 9 allocs, 9 frees, 1,152 bytes allocated
==3221==
==3221== All heap blocks were freed -- no leaks are possible
==3221==
==3221== For counts of detected and suppressed errors, rerun with: -v
==3221== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
zakaria@ubuntu:~/0x13. More singly linked lists$
```

### 5. Free
Write a function that frees a `listint_t` list.
* Prototype: `void free_listint2(listint_t **head);`
* The function sets the `head` to `NULL`

```shell
zakaria@ubuntu:~/0x13. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c -o 5-free_listint2
zakaria@ubuntu:~/0x13. More singly linked lists$ valgrind ./5-free_listint2
==3260== Memcheck, a memory error detector
==3260== Copyright (C)
==3260== Command: ./5-free_listint2
==3260==
0
1
2
3
4
98
402
1024
(nil)
==3260==
==3260== HEAP SUMMARY:
==3260==     in use at exit: 0 bytes in 0 blocks
==3260==   total heap usage: 9 allocs, 9 frees, 1,152 bytes allocated
==3260==
==3260== All heap blocks were freed -- no leaks are possible
==3260==    
==3260== For counts of detected and suppressed errors, rerun with: -v
==3260== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
zakaria@ubuntu:~/0x13. More singly linked lists$
```

### 6. Pop
Write a function that deletes the head node of a `listint_t` linked list, and returns the head node’s data (n).
* Prototype: `int pop_listint(listint_t **head);`
* if the linked list is empty return `0`

```shell
zakaria@ubuntu:~/0x13. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 6-pop_listint.c -o 6-pop_listint
zakaria@ubuntu:~/0x13. More singly linked lists$ valgrind ./6-pop_listint
==3299== Memcheck, a memory error detector
==3299== Copyright (C)
==3299== Command: ./6-pop_listint
==3299==
0
1
2
3
4
98
402
1024
- 0
1
2
3
4
98
402
1024
- 1
2
3
4
98
402
1024
(nil)
==3299==
==3299== HEAP SUMMARY:
==3299==     in use at exit: 0 bytes in 0 blocks
==3299==   total heap usage: 9 allocs, 9 frees, 1,152 bytes allocated
==3299==
==3299== All heap blocks were freed -- no leaks are possible
==3299==
==3299== For counts of detected and suppressed errors, rerun with: -v
==3299== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
zakaria@ubuntu:~/0x13. More singly linked lists$
```

