#include "main.h"

/**
*spe_percent - function for percent sign character
*@arg_list - variable arguments
*Return: %
*/
char *spe_percent(var_list arg_list)
{
	char *ptr;

	ptr = "%";
	
	/*Checking is character in variable arguments is percent sign character*/
	if (va_arg(arg_list, int) == *ptr)
		return (ptr);

	return (ptr);
}
