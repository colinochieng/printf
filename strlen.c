#include "main.h"

/**
*_strlen - finds length of string
*@s: pointer to a string
*Return: length
*/

int _strlen(char *s)
{
	int i = 0;

	do {
		i++;
	} while (s[i] != '\0');

	return (i);
}
