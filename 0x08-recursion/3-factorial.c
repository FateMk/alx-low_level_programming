#include "main.h"
/**
 * factorial - factorial block
 * @n: integer
 * Decription: returns the factorial of agiven number
 */
int factorial(int n)
{
	if (n == 1)
		return 1;
	else if (n < 1)
		return -1;
	return n * factorial(n - 1);
}

