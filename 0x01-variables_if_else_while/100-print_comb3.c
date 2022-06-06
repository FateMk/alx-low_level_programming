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
	i = 0;

	/*for (i = 0; i < 100; i++)*/
	while (i < 100)
	{
		j = i / 10;
		k = i % 10;
		if (j < k)
		{
		putchar(j + '0');
		putchar(k + '0');
		}
			if (i < 89)
			{
				putchar(44);
				putchar(32);
			}
		i++;
	}
	putchar('\n');
	return (0);
}
