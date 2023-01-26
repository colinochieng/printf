#include "main.h"
/**
*print_int - outputs intergers in stdout
*@arg: variable _printf's arguments
*@func_ptr: struct pointer
*Return: total printed characters
*/
int print_int(va_list arg, indicator *func_ptr)
{
	int i, value;

	i = va_arg(arg, int);
	value = sum_up(i);

	if(i >= 0 && (*func_ptr).gap_flag = 1 && (*func_ptr).plus_flag = 1)
		value += _putchar(32);
	if (i >= 0 && (*func_ptr).plus_flag = 1)
		value += _putchar(43);
	if (i <= 0)
		value++;

	print_digits(i);
	return (value);
}
