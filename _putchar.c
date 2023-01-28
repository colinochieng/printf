#include "main.h"
/**
*_putchar - writes a single character
*as an argument to standard output
*@c: character to be written in stdout
*Return: 1
*/
int _putchar(char c)
{
	static int m;
	static char buffer[BUFSIZE];

	if (m >= BUFSIZE || c == -1)
	{
		write(1, &buffer, m);

		m = 0;
	}
	if (c != -1)
	{
		buffer[m] = c;
		m++;
	}
	return (1);
}
