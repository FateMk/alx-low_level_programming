#include <stdio.h>
/**
 * main - main  block
 * Description: prints the alphabetsin lowercase
 * followed by a new line
 * Return: 0
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
