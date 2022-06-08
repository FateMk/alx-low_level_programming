#include "main.h"
/**
 * print_sign - print_sign block
 * Description: print if number n is posive, negative or zerro.
 * Return: 1 if greater then zero Return: 0 if it zero else Return: -1 if less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
}
