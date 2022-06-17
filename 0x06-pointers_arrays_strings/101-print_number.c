#include "main.h"
/**
 * print_number - print_number block
 * @n: int type integer
 * Description: prints an integer.
 */
void print_number(int n)
{
	unsigned int num = n;
	
	if (num < 0)
	{
		putchar('-');
		num = -num;
	}
	if((num / 10) > 0)
	{
		print_number(num / 10);
	}
		putchar((num % 10) + '0');
}
