#include "main.h"

/**
*concatinate - joins two strings
*@s1: pointer to first string
*@s2: pointer to second string
*Return: joined s2 to s1
*/

char *concatinate(char *s1, char *s2)
{
	int i = 0, j;

	while (s1[i] != '\0')
		i++;

	j = 0;

	while (s2[j] != '\0')
	{
		j++;
		s1[i] = s2[j - 1];
		i++;
	}

	s1[i] = '\0';
	return (s1);
}
