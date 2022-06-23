#include "main.h"
/**
 * factorial - factorial block
 * @n: integer
 * Decription: -1 if n is less than 0 else  return 1
 */
int factorial(int n)
{
	if (n == 1)
		return (1);
	else if (n < 1)
		return (-1);
	return (n * factorial(n - 1));
}

