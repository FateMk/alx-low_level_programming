#include "main.h"
#include <stdlib.h>
/**
 * create_array - craete_array block
 * @size: integer
 * @c: character
 * Return: Null if size is equal to 0 or if it fails
 *        else return a pointer to an array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *j;

	if (size == 0)
		return (NULL);
	j = malloc(sizeof(char) * size);
	if (j == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		j[i] = c;
	}
	return (j);
}
