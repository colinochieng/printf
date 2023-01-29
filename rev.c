#include "main.h"

/**
*rev - reverses a string
*@arg: string arguments
*@func_ptr: struct pointer
*Return: total printed characters
*/
int rev(va_list arg, indicator *func_ptr)
{
	char *str =  va_arg(arg, char *);
	int i, j;

	(void)func_ptr;
	if (!str)
		return (0);

	i = _strlen(str);
	j = i - 1;

	while (j >= 0)
	{
		_putchar(str[j]);
		j--;
	}

	return (i);
}
