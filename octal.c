#include "main.h"

/**
*print_oct_num - outputs octal numbers in stdout
*@arg: variable _printf's arguments
*@func_ptr: struct pointer
*Return: total printed characters
 */
int print_oct_num(va_list arg, indicator *func_ptr);
{
	unsigned int num = va_arg(arg, unsigned int);
	char *ptr = modify(num, 8, 0);
	int digits = 0;

	if ((*func_ptr).hash_flag == 1 && ptr[0] != '0')
		digits += _putchar('0');
	digits += put_str(ptr);

	return (digits);
}
