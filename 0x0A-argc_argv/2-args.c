#include "main.h"
#include <stdio.h>
/**
 * main - main block
 * @argc: counter
 * @argv: array name
 * Description prits all argumets that it receives
 * Return: 0;
 */
int main(int argc, cahr *argv[])
{
	int i;
	
	for (i = 0; i < argc; i++)
	{
                printf("%s\n", argv[i]);
	}
	return (0);
}
