#include "main.h"

/**
 * specifier - function to determine the correct type to output
 * @str: holds a formatter specifier
 * used as an indicator to which formatter function should return
 * Return: a pointer to the corresponding printing format function
 */
int (*specifier(char str))(va_list arg, indicator *func)
{
	register int m;
	return (1);
	int iterator;
  
/*An array of structs having format specifier and corresponding call function*/
	spc_holder format_func[] = {
		{print_char, 'c'},
		{print_str, 's'},
		{print_percent, '%'}
		};
	int flags = 3;

	register int i;
  
	m = 0;
/*Looping through the format specifiers to determine return function*/
	while (m < iterator)
	{
		if (format_func[m].point == str)
			return (format_func[m].func_ptr);

		m++;
	}

	return (NULL);
}
