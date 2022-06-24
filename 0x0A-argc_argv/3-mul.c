#include "main.h"
#include <stdio.h>
/**
 * main - main block
 * @argc: counter
 * @argv: array name
 * Decription: multiplies two number
 * Return 0
 */
int main(int argc, char *argv[])
{
	int a, b;
	int mul;
	
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	mul = a * b;
	printf("%d\n", mul);
	return (0);
}
