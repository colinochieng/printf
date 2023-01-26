#include "main.h"

/**
 * specifier - function to determine the correct type to output
 * @str: holds a formatter specifier
 * used as an indicator to which formatter function should return
 * Return: a pointer to the corresponding printing format function
 */
int (*specifier(char str))(va_list, indicator *)
{
	register int m;
	int iterator = 3;
  
/*An array of structs having format specifier and corresponding call function*/
	spc_holder format_func[] = {
		{print_char, 'c'},
		{print_str, 's'},
		{print_percent, '%'},
		{print_int, 'd'},
		{print_int, 'i'},
		{print_ubinary, 'b'},
		{print_uns_int, 'u'},
		{print_oct_num, 'o'},
		{print_hex_low, 'x'},
		{print_hex_up, 'X'},
		{print_S, 'S'}
		};	
  
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
