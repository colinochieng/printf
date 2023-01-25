#include "main.h"


int int _printf(const char *format, ...)
{
	unsigned int i;
	char *buffer, *str;
	va_list arg_list;

	if (format != NULL)
	{
		va_start(arg_list, format);
		

		for (i = 0; format && format[i] != ' '; i++)
		{
			if (format[0] == % && format[1] == ' ')
				return (-1);
			

			
		
