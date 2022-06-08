#include "main.h"
/**
 * print_sign - print_sign block
 * Description: print the sign of a number
 * Return: 1 if greater then zero
 * Return: 0 if it zero else Return: -1 if less than zero
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('+');
		_putchar('\n');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
		return(0);
	}
	else
	{
		_putchar('-');
		_putchar('\n');
		return(-1);

	}
}
