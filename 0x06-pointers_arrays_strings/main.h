#ifndef MAIN_H
#define MAIN_H

/*
 * File: main.h
 * Auth: Zakaria Ait Ali <zakariaaitali555@gmail.com>
 * Desc: Header file containing declarations for all functions
 *       used in the 0x06-pointers_arrays_strings directory.
 */

/* Prototypes */
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);

#endif
