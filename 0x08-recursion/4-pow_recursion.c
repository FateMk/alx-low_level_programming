#include "main.h"
/**
 * _pow_recursion - _pow_recursion block
 * @x: integer
 * @y: integer
 * Description: returns value of x raised to power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return -1;
	else if (y == 0)
		return 1;
	return x * _pow_recursion(x, y - 1);
}
