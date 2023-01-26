#include "main.h"

/**
*print_hex_low - outputs hexadecimal in lowercase at stdout
*@arg: variable _printf's arguments
*@func_ptr: struct pointer
*Return: total printed characters
 */
int print_hex_low(va_list arg, indicator *func_ptr)
{
	unsigned int num = va_arg(arg, unsigned int);
	char *ptr = modify(num, 16, 1);
	int digits = 0;

	if ((*func_ptr).hash_flag == 1 && ptr[0] != '0')
		digits += put_str("0x");
	digits += put_str(ptr);
	return (digits);
}
