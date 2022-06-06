#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Use `putchar` function to print the alphabet in lowercase.
 * Return: 0
 */
int main(void)
{
	char i;
	char I;
	/* for loop lower case output*/
	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (I = 'A'; I <= 'Z'; I++)
	{
		putchar(I);
	}
	putchar('\n');
	exit(0);
}
