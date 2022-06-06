#include <stdio.h>
/**
 * main - main block.
 * Description: Print all numbers of base 10, starting from 0.
 * Return: 0.
 */
int main(void)
{
	int i;
	/* printing all number to base 10 using printf */
	for (i = 0; i < 10; i++)
	{
		printf("%i", i);
	}
	putchar('\n');
	return (0);
}
