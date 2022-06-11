#include "main.h"
/**
 * print_diagonal - print_diagonal block
 * @n: int tyoe integer
 * Description: draws a diagonal line on terminal and should end with a new \n
 * print \n if n is 0 or less
 */
void print_diagonal(int n)
{
	int c, i;

	c = 0;

	while (n > 0)
	{
		i = c;
		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		_putchar('\\');
		_putchar('\n');
		c++;
		n--;
	}
	if (c < 1)
		_putchar('\n');
}
