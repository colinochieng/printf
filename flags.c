#include "main.h"
/**
*flags - activates flags on _printf
*@f: flag character
*@func: struct pontier
*Return: 1 or 0
*/

int flags(char f, indicator *func)
{
	int m = 0;

	if (f == '+')
	{
		(*func).plus = 1;
		m = 1;
	}
	else if (f == ' ')
	{
		(*func).space = 1;
		m = 1;
	}
	else if (f == '#')
	{
		(*func).hash = 1;
		m = 1;
	}

	return (m);
}
