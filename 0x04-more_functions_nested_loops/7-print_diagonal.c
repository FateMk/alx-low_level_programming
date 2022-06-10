#include "main.h"
/**
 * print_diagonal - print_diagonal block
 * @n: int tyoe integer
 * Description: draws a diagonal line on terminal
 * diagonal should end with a \n
 * print \n if n is 0 or less
 */
void print_diagonal(int n)
{
	int l, s;
	/*nested for loop inside if statement*/
	if (n > 0)
	{
		for (l = 0; l < n; l++)
		{
			for (s = 0; s < l; s++)
			{
				_putchar(' ');
				_putchar('\\');
			}
			if (l == n - 1)
				continue;
			_putchar('\n');
		}
		_putchar('\n');
	}
}
