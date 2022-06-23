#include "main.h"
/**
 * _sqrt_recursion - _sqrt_recursion block
 * @n: integer
 * Returns: -1 if n doesn't have a square root
 */
int square(int a, int b);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square -  square block
 * @a: integer
 * @b: integer
 * Return: b if square root to a is b else -1 if a has no square root
 */
int square(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (square(a, b + 1));
}
