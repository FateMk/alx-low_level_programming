#include "main.h"
/**
 * print_sign - print_sign block
 * Description: print the sign of a number
 * Return: 1 if greater then zero
 * Return: 0 if it zero else Return: -1 if less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
		_putchar('\n')
	}
	else if (n == 0)
	{
		_putchar('0');
		return(0);
		_putchar('\n');
	}
	else
	{
		_putchar('-');
		return(-1);
		_putchar('\n');

	}
}
