#include "main.h"
/**
 * print_sign - print_sign block
 * @n: type int integer, can be negative or positive
 * Description: prints +, -, or 0 depending on the number
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
