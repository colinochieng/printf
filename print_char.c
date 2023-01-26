#include "main.h"

/**
*print_char - outputs characters
*@arg: variable _printf's arguments
*@func: pointer to structure of flags
*Return: int
*/

int print_char(va_list arg, indicator *func)
{
	(void) func;

	_putchar(va_arg(arg, int));
	return (1);
}
