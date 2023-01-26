#include "main.h"

/**
*put_str - prints stirng
*@s: pointer to the string to be printrd
*Return: characters printed
*/

int put_str(char *s)
{
	register int j = 0;

	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}

	return (j);
}
	
