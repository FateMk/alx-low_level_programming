#include "main.h"
/**
 * factorial - factorial block
 * @n: integer
 * Return: -1 if n is less than 0 else 1 n izs equal to 1
 * 
 */
int factorial(int n)
{
	if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}

