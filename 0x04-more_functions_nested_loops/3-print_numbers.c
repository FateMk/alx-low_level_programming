#include "main.h"
/**
 * print_number - print_numbers block
 * Description: prints numner from zero to nine
 * followed by a new line
 * use _putchar twice
 */
void print_numbers(void)
{
	int i;
	/* for loop*/
	for (i = 0; i < 10; i++)
	{
		_putchar((i % 10) + '0');
	}
	putchar('\n');
}