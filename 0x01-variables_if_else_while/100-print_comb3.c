#include <stdio.h>
/**
 * main - main block
 * Description:print combination of 2 digits.
 * print in ascending order with two digits
 * can only use putchar function.
 * use putchar five times maximum
 * not allowed to use any variable of type char.
 * Return: 0
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 100; i++)
	{
		j = i / 10;
		k = i % 10;

		putchar(j + '0');
		putchar(k + '0');
	}
	if (i < 99)
	{
		putchar(44);
		putchar(32);
	}
	putchar('\n');
	return (0);
}
