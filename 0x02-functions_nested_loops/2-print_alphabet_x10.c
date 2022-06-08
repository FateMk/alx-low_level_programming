#include "main.h"
/*
 * Function print_alphabet_x10 - print_alphabet_x10 block
 * Description: Print alphabet in lowercase 10 times
 * follwed by a new line
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char i;
	int a;
	/* printing alphabet 10 times*/
	a = 0;
	while (a < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		a++;
	}
}
