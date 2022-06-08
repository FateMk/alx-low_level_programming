#include "main.h"
/**
 * print_to_98 - print_to_98 block
 * @n: int type integer
 * Description:print all natural numbers 
 * from zero to 98 followed by a new line
 */
void print_to_98(int n)
{
	int i, j, k;
	
	n = 0;
	while(n >= 98)
	{
		i = n / 100;
		j = n / 10;
		k = n % 10;
		if(n > 9)
		{
			_putchar(i + '0');
			_putchar(j + '0');
			_putchar(k + '0');
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
		}
		n--;
	}
	_putchar('\n');
}
