#include "main.h"

/**
*rot13 -  prints the rot13'ed string
*@arg: variable _printf's arguments
*@func_ptr: struct pointer
*Return: total printed characters
*/

int rot13(va_list arg, indicator *func_ptr)
{
	int i, j;
	char input[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *str = va_arg(arg, char *);

	(void)func_ptr;
	for (j = 0; str[j]; j++)
	{
		if (str[j] < 'A' || (str[j] > 'Z' && str[j] < 'a') || str[j] > 'z')
			_putchar(str[j]);
		else
		{
			for (i = 0; i <= 52; i++)
			{
				if (str[j] == input[i])
					_putchar(rot[i]);
			}
		}
	}

	return (j);
}
