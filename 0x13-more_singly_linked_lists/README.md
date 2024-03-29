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

### 7. Get node at index
Write a function that returns the nth node of a `listint_t` linked list.
* Prototype: `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);`
* where `index` is the index of the node, starting at `0`
* if the node does not exist, return `NULL`

```shell
zakaria@ubuntu:~/0x13. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 7-get_nodeint.c -o 7-get_nodeint
zakaria@ubuntu:~/0x13. More singly linked lists$ ./7-get_nodeint
0
1
2
3
4
98
402
1024
98
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

### 8. Sum list
Write a function that returns the sum of all the data (n) of a `listint_t` linked list.
* Prototype: `int sum_listint(listint_t *head);`
* if the list is empty, return `0`

```shell
zakaria@ubuntu:~/0x13. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 8-sum_listint.c -o 8-sum_listint
zakaria@ubuntu:~/0x13. More singly linked lists$ ./8-sum_listint
sum = 1534
zakaria@ubuntu:~/0x13. More singly linked lists$
```

### 9. Insert
Write a function that inserts a new node at a given position.
* Prototype: `listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);`
* where `idx` is the index of the list where the new node should be added. Index starts at `0`
* Returns: the address of the new node, or `NULL` if it failed
* if it is not possible to add the new node at index `idx`, do not add the new node and return `NULL`

```shell
zakaria@ubuntu:~/0x13. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 9-insert_nodeint.c -o 9-insert_nodeint
zakaria@ubuntu:~/0x13. More singly linked lists$ ./9-insert_nodeint
0
1
2
3
4
98
402
1024
-----------------
0
1
2
3
4
4096
98
402
1024
zakaria@ubuntu:~/0x13. More singly linked lists$
```

### 10. Delete at index
Write a function that deletes the node at index `index` of a `listint_t` linked list.
* Prototype: `int delete_nodeint_at_index(listint_t **head, unsigned int index);`
* where `index` is the index of the node that should be deleted. Index starts at `0`
* Returns: `1` if it succeeded, `-1` if it failed

```shell
zakaria@ubuntu:~/0x13. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 10-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 10-delete_nodeint.c -o 10-delete_nodeint
zakaria@ubuntu:~/0x13. More singly linked lists$ valgrind ./10-delete_nodeint
==3371== Memcheck, a memory error detector
==3371== Copyright (C)
==3371== Command: ./10-delete_nodeint
==3371==
0
1
2
3
4
98
402
1024
-----------------
0
1
2
3
4
402
1024
-----------------
1
2
3
4
402
1024
-----------------
2
3
4
402
1024
-----------------
3
4
402
1024
-----------------
4
402
1024
-----------------
402
1024
-----------------
1024
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
==3371==
==3371== HEAP SUMMARY:
==3371==     in use at exit: 0 bytes in 0 blocks
==3371==   total heap usage: 9 allocs, 9 frees, 1,152 bytes allocated
==3371==
==3371== All heap blocks were freed -- no leaks are possible
==3371==
==3371== For counts of detected and suppressed errors, rerun with: -v
==3371== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
zakaria@ubuntu:~/0x13. More singly linked lists$
```

