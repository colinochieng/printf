#include "main.h"

/**
*find_len - finds length of string
*@str: string passed
*Return: value of i (string length)
*/

int find_len(char str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}
