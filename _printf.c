#include "main.h"

/**
*_printf - produces output according to a format]
*@format: is a character string
*Return: 0
*/

int _printf(const char *format, ...)
{
	const char *c;
	register int iter = 0;
	int (*ptr_f)(va_list, indicator *);
	indicator f = {0, 0, 0};
	indicator *f_ptr;
	f_ptr = &f;

	va_list arg;

	va_list(arg, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	c = format;

	while (*c)
	{
		if (*c == '%')
		{
			p++;
			if (*c == '%')
			{
				iter += _putchar(37);
				continue;
			}
			while (flags(*p, f_ptr))
			       c++;

			ptr_f = specifier(*c);
			if (ptr_f)
			{
				iter += ptr_f(arg, f_ptr);
			}
			else
			{
				iter += _printf("%%%c", *c);
			}
		}
		else
		{
			iter += _putchar(*p);
		}
		c++;
	}

	_putchar(-1);
	va_end(arg);
	return (iter);
}
