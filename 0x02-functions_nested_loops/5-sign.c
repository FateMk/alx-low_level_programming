#include "main.h"
/**
 * print_sign - print_sign block
 * Description: checks if n is posive, negative or zero.
 * Return: 1 if greater then zero Return: 0 if it zero else Return: -1 
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
