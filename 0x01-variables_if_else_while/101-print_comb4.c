#include <stdio.h>
/**
 * main - main block.
 * Description: print combination of 3 digits.
 * only use putchar function.
 * can only use putchar to a maximum of six times.
 * not allowed to usr any variable of date type char.
 * Return: 0
 */
int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 1000; i++)
	{
		j = i / 100;/* hundreds */
		k = (i / 10) % 10;/* tens */
		l = i % 10; /*singles/ ones*/
		if (j < k && k < l)
		{
			putchar(j + '0');
			putchar(k + '0');
			putchar(l + '0');
			if (i < 700)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
