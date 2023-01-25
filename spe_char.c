#include "main.h"

/**
*spe_char - function to return an array of char
*@arg_list: holds a number of arguments to be retrived
*Return: string of characters
*/
char *spe_char(var_list arg_list)
{
	char *str;

	str = (char*)malloc(2 * sizeof(char));

	/*Retrives next argument from va_list*/
	*str = (char)va_arg(arg_list, int);

	return (str);
}
