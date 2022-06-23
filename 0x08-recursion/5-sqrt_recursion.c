#include "main.h"
/**
 * _sqrt_recursion - _sqrt_recursion block
 * @n: integer
 * Returns: -1 if n doesn't have a square root
 */

int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}

/**
 * sqrt -  sqrt  block
 * @a: integer
 * @b: integer
 * Description: looks for a square to a number
 */

int sqrt(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt(a, b + 1));
}


