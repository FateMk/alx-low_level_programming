#include "main.h"
#include <stdio.h>
/**
 * main - main block
 * @argc: counter
 * @argv: array name
 * Description: prints all argumets that it receives
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int i;
	/*for loop*/
	for (i = 0; i < argc; i++)
	{
                printf("%s\n", argv[i]);
	}
	return (0);
}
