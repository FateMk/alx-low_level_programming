#include <stdio.h>
#include <stdlib.h>
#include <stdout.h>
/**
 * main - main block
 * Description: Use `putchar` function to print the alphabet in lowercase.
 * Return: 0
 */
int main (void)
{
	char i = "a";
	while (i <= "z"){
		putchar(i);
		i++;
	}
	putchar("\n");
	
	exit(EXIT_SUCCESS);
}
