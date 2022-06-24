#include "main.h"
#include <stdio.h>
/**
 * main - main block
 * @argc: counter 
 * @argv: a vector array
 * Description: prints the program name
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void) argc;
	
	printf("%s\n", argv[0]);
	
	return (0);
}
