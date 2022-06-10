#include <stdio.h>
/*
 * print_square - print_square block
 * @size: int type integer
 * Description: prints size of a square using character #
 * move to a new line if size is 0 or less
 */
void print_square(int size)
{
	int a, b;
	/* all side of a square are equal*/
	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			b = 0;
			while(b < size)
			{
				putchar('#');
				b++;
			}
			if (b == size -1)
				continue;
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}

