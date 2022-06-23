#include "main.h"
/**
 * _pow_recursion - _pow_recursion block
 * @x: integer
 * @y: integer
 * Return: -1 if  y is less than 0 else 1 if y is equal to 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
