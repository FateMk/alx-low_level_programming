#include "main.h"
/*
 * print_alphabet_x10 - print_alphabet_x10 block
 * Description: Prints alphabets 10 times 
 * follwed by a new line
 */
void print_alphabet_x10(void)
{
	char i;
	int a;
	/* printing alphabet 10 times*/
	a = 0;
	while (a < 10)
	{
		i = 'a';
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		a++;
	}
}
