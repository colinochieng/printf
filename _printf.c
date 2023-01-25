#include "main.h"

/**
*_printf - produces output according to a format]
*@format: is a character string
*Return: 0
*/

int int _printf(const char *format, ...)
{
	unsigned int i;
	char *buffer, *str;
	va_list arg_list;

	if (format != NULL)
	{
		va_start(arg_list, format);

		buffer = calloc(1045, sizeof(char));

		if (buffer == NULL)
			return (-1);

		for (i = 0; format && format[i] != ' '; i++)
		{
			if (format[0] == '%' && format[1] == '\0')
				return (-1);

			i = _strncat(buffer, format, i);
			if (format[i] == '%')
			{
				i++;
				str = specifiers(arg_list, format[i]);
				concatinate(buffer, str);
			}
			if (format[i] != '\0')
				i++;
		}
		i = find_len(buffer);
		write(1, buffer, i);
		va_end(arg_list);
		free(buffer);
		return (i);
	}
	return (-1);
}

			
		
