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
	char *(*func_ptr)(var_list arg_list);
	char point;
} spc_holder;

int _printf(const char *format, ...);
int find_len(char *str);
char *concatinate(char *s1, char *s2);
char *specifiers(var_list arg_list, const char format);
char *spe_char(var_list arg_list);
char *spe_string(var_list arg_list);
char *spe_percent(var_list arg_list);

#endif /*MAIN_H*/
