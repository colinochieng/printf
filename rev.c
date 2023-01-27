#include "main.h"

/**
*rev - reverses a string
*@: string arguments
*Return: total printed characters
*/
int rev(va_list arg,  indicator *func_ptr)
{
	char *str;
	int i, digits, j = 0;

	str = va_arg(arg, char *);
	void(func_ptr);

	if (str == NULL)
		str = "(nil)";

	i = _strlen(str);
	j = i - 1;

	while (j >= 0)
	{
		_putchar(str[j]);
		j--;
		digits++;
	}

	return (digits);
}
