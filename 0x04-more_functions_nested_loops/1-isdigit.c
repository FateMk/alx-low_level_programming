#include "main.h"
/**
 * _isdigit - _isdigit block
 * @c: int type integer
 * Return: 1 if is c otherwise return 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
