#include "main.h"

/**
 *print_int - outputs intergers in stdout
*@arg: variable _printf's arguments
*@func_ptr: struct pointer
*Return: total printed characters
 */
int print_uns_int(va_list arg, indicator *func_ptr)
{
	unsigned int num = va_arg(arg, unsigned int);
	char *ptr = modify(num, 10, 0);

	(void)func_ptr;

	return (put_str(ptr));
}
