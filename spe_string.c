#include "main.h"

/**
*spe_string - a function that returns string
*arg_list - variable number of arguments
*Return: complete string
*/
char *spe_string(va_list arg_list)
{
	char *ptr = va_arg(arg_list, char*);

	if (ptr == NULL)
		ptr = "(null)";

	return (ptr);
}
