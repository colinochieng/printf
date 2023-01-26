#include "main.h"
 
/**
* print_S - Non printable characters (0 < ASCII value < 32 or >= 127)
* are printed this way: \x, followed by the ASCII code value in
* hexadecimal (upper case - always 2 characters)
*@arg: variable _printf's arguments
*@func_ptr: struct pointer
*Return: total printed characters
 */
int print_S(va_list arg, indicator *func_ptr)
{
	int m, digits = 0;
	char *result, *ptr = va_arg(arg, char *);
	(void)func_ptr;

	if (ptr == NULL)
		return (put_str("(null)"));

	for (m = 0; ptr[m]; m++)
	{
		if (ptr[m] > 0 && (ptr[m] < 32 || ptr[m] >= 127))
		{
			put_str("\\x");
			digits += 2;
			result = modify(ptr[m], 16, 0);
			if (!result[1])
				digits += _putchar('0');
			digits += put_str(result);
		}
		else
			digits += _putchar(ptr[m]);
	}
	return (digits);
}
