#include "main.h"
/**
 * print_to_98 - print_to_98 block
 * @n: int type integer
 * Description:print all natural numbers 
 * from zero to 98 followed by a new line
 */
void print_to_98(int n)
{
	n = 0
	while(n >= 98)
	{
		for(n = o; n <= 98; n++)
		{
			if(n > 9)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(n + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		n++;
	}
	_putchar('\n');
}
