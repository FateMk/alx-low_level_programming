#include "main.h"
/**
 * print_line - print_line
 * Description: prints a straight line
 * @n: int type integer
 * print \n if nn is 0 0r less
 */
void print_line(int n)
{
	if (n > 0)
	{
		for (int l = 0; l < n; l++)
			_putchar('_');
	}
	_putchar('\n');
}
