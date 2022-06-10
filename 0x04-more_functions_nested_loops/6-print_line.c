#include "main.h"
/**
 * print_line - print_line
 * Description: prints a straight line
 * @n: int type integer
 * print \n if nn is 0 0r less
 */
void print_line(int n)
{
	n = 1;
	while(n++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('_' * n);
	}
}
