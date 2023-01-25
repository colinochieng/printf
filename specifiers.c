#include "main.h"

char *specifiers(va_list arg_list, const char format)
{
	int i;
	char *str_ptr;

	spc_holder value[] = {
		{spe_char, 'c'},
		{spe_string, 's'},
		{spe_percent, '%'}
	};

	for (i = 0; i < 3 && value[i].point != format; i++)
		;

	str_ptr = value[i].func_ptr(format);
	
	return (str_ptr);
}
