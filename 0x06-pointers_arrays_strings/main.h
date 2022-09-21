#ifndef MAIN_H
#define MAIN_H

/**
 * file main.h
 * Auth: adam tech(adam birthday)
 * Desc: Header file containing prototypes for all functions
 * used in the 0x06, c - more pointers, arrays and strings directory
 */

int _putchar(char c);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strncmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *);
void print_number(int n);

#endif
