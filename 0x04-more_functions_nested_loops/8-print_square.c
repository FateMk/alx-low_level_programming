#include <stdio.h>
/*
 * print_square - print_square block
 * @size: int type integer
 * Description: prints size of a square using character #
 * move to a new line if size is 0 or less
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

