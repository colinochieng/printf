#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>

/**
*struct check_format - structure for switching format specifiers
*@func_ptr - points to corresponding function
*@point - targets specifier to identify needed function
*value of point is handed to func_ptr to call and provided
*return value of corresponding function
*/
typedef struct check_format
{
	char *(*func_ptr)(va_list arg_list);
	char point;
} spc_holder;

int _printf(const char *format, ...);
void *_calloc(unsigned int nmemb, unsigned int size);
char *_memset(char *s, char b, unsigned int n);
int find_len(char *str);
char *concatinate(char *s1, char *s2);
int *_strncat(char *dest, char const *src, int n);
char *specifiers(va_list arg_list, const char format);
char *spe_char(va_list arg_list);
char *spe_string(va_list arg_list);
char *spe_percent(va_list arg_list);

#endif /*MAIN_H*/
