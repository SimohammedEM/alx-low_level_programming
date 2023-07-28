#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *X1, char *X2, unsigned int n);
void *_calloc(unsigned int nmemx, unsigned int s);
int *array_range(int mn, int mx);
void *_realloc(void *p, unsigned int old_s, unsigned int new_s);
void errors(void);
int _strlen(char *s);
int is_digit(char *s);

#endif
