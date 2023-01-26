#include "main.h"

/**
 * convert - converts number and base into string
 * @num: input number
 * @base: input base
 * @lowercase: flag if hexa values need to be lowercase
 * Return: result string
 */
char *modify(unsigned long int num, int base, int lower)
{
	static char mem[50];
	static char *ch;
	char *p;
	if (lower)
	{
	ch = "0123456789abcdef";
	}
	else
	{
	ch = "0123456789ABCDEF";
	}
	p = &mem[49];
	*p = '\0';
	
	 for (; num != 0; num /= base)
	        *--p = ch[num % base];

    return (p);
}
