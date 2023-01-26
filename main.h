#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>
#define BUFSIZE 1024

/**
* struct flag - Handle the flag characters for non-custom conversion specifiers
*@plus_flag: +
*@gap_flag: space
*@hash_flag: #
*/
typedef struct flag
{
	int plus_flag;
	int hash_flag;
	int gap_flag;
} indicator;

/**
*struct check_format - structure for switching format specifiers
*@func_ptr - points to corresponding function
*@point - targets specifier to identify needed function
*value of point is handed to func_ptr to call and provided
*return value of corresponding function
*/
typedef struct check_format
{
	int (*func_ptr)(va_list arg_list, indicator *func_ptr);
	char point;
} spc_holder;

int _printf(const char *format, ...);
int (*specifier(char str))(va_list, indicator *);
int print_percent(va_list arg, indicator *func_ptr);
int print_char(va_list arg, indicator *func_ptr);
int print_str(va_list arg, indicator *func_ptr);
int put_str(char *s);
int _putchar(char c);
int flags(char f, indicator *func_ptr);
int print_int(va_list arg, indicator *func_ptr);
int sum_up(int n);
void print_digits(int d);
int print_ubinary(va_list arg, indicator *func_ptr);
char *modify(unsigned long int num, int base, int lower);

#endif /*MAIN_H*/
