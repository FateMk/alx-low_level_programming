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
	int i, j;
	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; i < 10; j++)
		{
			putchar((j % 10) + '0');
			putchar((k % 10) + '0');
			if (i == 89 && j == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
