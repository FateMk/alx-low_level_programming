#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: integer
 * Return: pointer to allocated memory
 *         else if malloc fails return 98
 */
void *malloc_checked(unsigned int b)
{
	int *str;

	str = malloc(sizeof(int) * b);
	if (str == NULL)
		putchar(98);
	return (str);
}

