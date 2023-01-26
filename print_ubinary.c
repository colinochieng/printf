#include "main.h"

/**
*print_ubinary - outputs binary in stdout
*unsigned int argument is converted to binary
*@arg: variable _printf's arguments
*@func_ptr: struct pointer
*Return: total printed characters
*/

int print_ubinary(va_list arg, indicator *func_ptr)
{
	unsigned int digit = va_arg(arg, unsigned int);
	char *ptr = modify(digit, 2, 0);

	(void)func_ptr;

	return (put_str(ptr));
}
