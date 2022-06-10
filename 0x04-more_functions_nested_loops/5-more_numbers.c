#include "main.h"
/**
 * more_numbers - more_number block
 * Description: prints numbers from 0 to 14
 * 10 times followed by a new line
 */
void more_number(void)
{
	int i, j;
	
	i = 0;
	while (0 < 10)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
		i++;
	}
}
