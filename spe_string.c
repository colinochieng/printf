#include "main.h"

/**
*spe_string - a function that returns string
*arg_list - variable number of arguments
*Return: complete string
*/
char *spe_string(var_list arg_list)
{
	char *ptr = va_arg(argu, char*);

	if (ptr == NULL)
		ptr = "(null)";

	return (str);
}
