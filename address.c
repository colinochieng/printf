#include "main.h"

/**
 * print_address - prints address in hexadecimal
 *@arg: variable _printf's arguments
 *@func_ptr: struct pointer
 *Return: total printed characters
 */
int address(va_list arg, indicator *func_ptr)
{
	unsigned long int add = va_arg(arg, unsigned long int);
	char *ptr;
	register int digits = 0;
	(void)func_ptr;

	if (add == NULL)
		return (put_str("(nil)"));

	ptr = modify(p, 16, 1);
	digits += put_str("0x");
	digits += put_str(ptr);

	return (digits);
}
