#include <stdio.h>
#include <stdlib.h>
/**
 *main - main block
 *Description: Print all numbers of base 10, starting from 0.
 *Return: 0
 */
int main(void)
{
	int i;
	/*print all numbers of base 10*/
	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
