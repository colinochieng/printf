#include "main.c"

/**
*print_percent - function to output percent
*@arg: variable _printf's arguments
*@func: pointer to structur for flags
*Return: charcters printed
*/

int print_percent(va_list arg, indicator *func)
{
	(void) arg;
	(void) func;

	return (_putchar(37));
}
