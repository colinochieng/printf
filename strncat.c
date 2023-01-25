#include "main.h"
/**
*_strncat - joins two strings
*@dest: first string
*@src: second string
*@n: bytes of n to be allocates to dest
*Return: joined string
*/

int _strncat(char *dest, char const *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	;

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (n + 1);
}
