#include "main.h"
/**
 * more_numbers - more_number block
 * Description: prints numbers from 0 to 14
 * 10 times followed by a new line
 */
void more_number(void)
{
	int i, j;
	/* nested loops*/
	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 15)
		{ 
			if (j > 9)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			j++;
		}
		i++;
		_putchar('\n');
	}
}
