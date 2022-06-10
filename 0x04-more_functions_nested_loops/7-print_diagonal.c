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
	int b;
	/* for loop in an if statent*/
	if (n > 0)
	{
		for (b = 0; b < n; b++)
			_putchar('\');
	}
	_putchar('\n');
}

