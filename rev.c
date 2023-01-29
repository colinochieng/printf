#include "main.h"

/**
*rev - reverses a string
*@: string arguments
*Return: total printed characters
*/
int rev(va_list arg, indicator *func_ptr)
{
	char *str =  va_arg(arg, char *);
	int i, j = 0;

	(void)func_ptr;
	if (str == NULL)
		str = "(null)";

	i = _strlen(str);
	j = i - 1;

	while (j >= 0)
	{
		_putchar(str[j]);
		j--;
	}

	return (i);
}
