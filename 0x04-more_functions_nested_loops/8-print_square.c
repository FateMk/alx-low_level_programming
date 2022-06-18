#include "main.h"
/*
 * print_square - print_square block
 * @size: int type integer
 * Description: use  char # to print.
 * If size is 0 or less, the function should print only a new line
 */
void print_square(int size)
{
	int x, y;
       /* while loop in an if statement*/
	x = 0;
	if (size < 1)
		_putchar('\n');
	while (x < size)
	{
		y = 0;
		while (y < size)
		{
			_putchar('#');
			y++;
		}
		_putchar('\n');
		x++;
	}
}

