#include "main.h"

/**
*sum_up - counts number of digits in integers
*@n: passed interger digit
*Return: digits count
*/
int sum_up(int n)
{
	unsigned int i, j = 0;
/*verifies whether the input integer is negative to be converted to positive*/
	if (n < 0)
		i = n * -1;
	else
		i = n;

/*division carried out several times until the quotient is zero*/
	for(; i != 0; j++)
		i /= 10;
  
	return (j);
}
  
