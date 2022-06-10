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
	/* while loop*/
	i = 0;
	while (i < 10)
	{
		_putchar(i + '0');
		i++;
		_putchar('\n');
	}
}
