#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>

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
	char (*func_ptr)(va_list arg_list, indicator *ptr);
	char point;
} spc_holder;

int _printf(const char *format, ...);


#endif /*MAIN_H*/
