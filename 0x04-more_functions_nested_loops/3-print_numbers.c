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
	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
