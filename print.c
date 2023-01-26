#include "main.h"

/**
*print_digits - prints digit to standard output
*@d: digit to be printed
*Return: void
*/
void print_digits(int d)
{
	unsigned int num;

/*conversion of negative digits to positive*/
	if (d < 0)
	{
		_putchar('-');
		num = -d;
	}
	else
		num = d;

/*Iteration to print the digit*/
	if (num / 10)
		print_digits(num / 10);
	_putchar((num % 10) + '0');
}
