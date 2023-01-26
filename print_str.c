#include "main.h"

/**
*print_str - outputs string
*@arg: variable _printf's arguments
*@func: points to struct
*Return: string
*/
int print_str(va_list arg, indicator *func)
{
	(void)func;
	char *get_str(arg, char *);

	if (get_str == NULL)
		get_str = "(null)";

	return (put_str(get_str));
}
