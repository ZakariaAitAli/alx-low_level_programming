# 0x01. C - Variables, if, else, while
## Tasks
### 0. Positive anything is better than negative nothing
> File: `0-positive_or_negative.c`
> This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print whether the number stored in the variable n is positive or negative.
> - You can find the source code [here](https://github.com/alx-tools/0x01.c/blob/master/0-positive_or_negative_c)
> - The variable n will store a different value every time you will run this program
> - You don’t have to understand what rand, srand, RAND_MAX do. Please do not touch this code
>
> ```
> zakaria@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-positive_or_negative.c -o 0-positive_or_negative
> zakaria@ubuntu:~/0x01$ ./0-positive_or_negative
> -520693284 is negative
> zakaria@ubuntu:~/0x01$ ./0-positive_or_negative
> -973398895 is negative
> zakaria@ubuntu:~/0x01$ ./0-positive_or_negative
> -199220452 is negative
> zakaria@ubuntu:~/0x01$ ./0-positive_or_negative
> 561319348 is positive
> zakaria@ubuntu:~/0x01$ ./0-positive_or_negative
> 561319348 is positive
> zakaria@ubuntu:~/0x01$ ./0-positive_or_negative
> 266853958 is positive
> zakaria@ubuntu:~/0x01$ ./0-positive_or_negative
> -48147767 is negative
> zakaria@ubuntu:~/0x01$ ./0-positive_or_negative
> 0 is zero
> zakaria@ubuntu:~/0x01$ 
> ```
### 1. The last digit
> File: `1-last_digit.c`
> This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable n.
> - You can find the source code [here](https://github.com/alx-tools/0x01.c/blob/master/1-last_digit_c)
> - The variable n will store a different value every time you run this program
> - You don’t have to understand what rand, srand, and RAND_MAX do. Please do not touch this code
>
> ```
> zakaria@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-last_digit.c -o 1-last_digit
> zakaria@ubuntu:~/0x01$ ./1-last_digit
> Last digit of 629438752 is 2 and is less than 6 and not 0
> zakaria@ubuntu:~/0x01$ ./1-last_digit
> Last digit of -748255693 is -3 and is less than 6 and not 0
> zakaria@ubuntu:~/0x01$ ./1-last_digit
> Last digit of -1052791662 is -2 and is less than 6 and not 0
> zakaria@ubuntu:~/0x01$ ./1-last_digit
> Last digit of -284805734 is -4 and is less than 6 and not 0
> zakaria@ubuntu:~/0x01$ ./1-last_digit
> Last digit of -284805734 is -4 and is less than 6 and not 0
> zakaria@ubuntu:~/0x01$ ./1-last_digit
> Last digit of 491506926 is 6 and is greater than 5
> zakaria@ubuntu:~/0x01$ ./1-last_digit
> Last digit of 954249937 is 7 and is greater than 5
> zakaria@ubuntu:~/0x01$ ./1-last_digit
> Last digit of 652334952 is 2 and is less than 6 and not 0
> zakaria@ubuntu:~/0x01$ ./1-last_digit
> Last digit of -729688197 is -7 and is less than 6 and not 0
> zakaria@ubuntu:~/0x01$ ./1-last_digit
> Last digit of -729688197 is -7 and is less than 6 and not 0
> zakaria@ubuntu:~/0x01$ ./1-last_digit
> Last digit of 45528266 is 6 and is greater than 5
> zakaria@ubuntu:~/0x01$ ./1-last_digit
> Last digit of 45528266 is 6 and is greater than 5
> zakaria@ubuntu:~/0x01$ ./1-last_digit
> Last digit of 809065140 is 0 and is 0
> zakaria@ubuntu:~/0x01$
> ```
### 2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
> File: `2-print_alphabet.c`
> Write a program that prints the alphabet in lowercase, followed by a new line.
> - You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
> - All your code should be in the main function
> - You can only use putchar twice in your code
>
> ```
> zakaria@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-print_alphabet.c -o 2-print_alphabet
> zakaria@ubuntu:~/0x01$ ./2-print_alphabet
> abcdefghijklmnopqrstuvwxyz
> zakaria@ubuntu:~/0x01$
> ```
### 3. alphABET
> File: `3-print_alphabets.c`
> Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
> - You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
> - All your code should be in the main function
> - You can only use putchar three times in your code
>
> ```
> zakaria@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-print_alphabets.c -o 3-print_alphabets
> zakaria@ubuntu:~/0x01$ ./3-print_alphabets | cat -e
> abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ$
> zakaria@ubuntu:~/0x01$
> ```
### 4. When I was having that alphabet soup, I never thought that it would pay off
File: `4-print_alphabt.c`
### 5. Numbers
File: `5-print_numbers.c`
### 6. Numberz
File: `6-print_numberz.c`
### 7. Smile in the mirror
File: `7-print_tebahpla.c`
### 8. Hexadecimal
File: `8-print_base16.c`
### 9. Patience, persistence and perspiration make an unbeatable combination for success
File: `9-print_comb.c`
### 10. Inventing is a combination of brains and materials. The more brains you use, the less material you need
File: `100-print_comb3.c`
### 11. The success combination in business is: Do what you do better... and: do more of what you do...
File: `101-print_comb4.c`
### 12. Software is eating the World
File: `102-print_comb5.c`

