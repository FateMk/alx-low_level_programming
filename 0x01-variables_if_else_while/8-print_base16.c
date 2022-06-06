#include <stdio.h>
/**
 * main - main block
 * Description: print base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	char a;
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
