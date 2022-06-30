#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of strings
 * @min: minimum integer
 * @max: maximum integer
 * Return: pointer to a newly created array
 *         NULL if min > max
 *         NULL if malloc fails
 */
int *array_range(int min, int max)
{
	int *str, i;

	if (min > max)
		return (NULL);
	if (max - min == 0)
	{
		str = malloc(sizeof(int));
		str[0] = min;
	}
	else
	{
		str = malloc(sizeof(int) * (max - min + 1));
		if (str == NULL)
			return (NULL);
		for (i = 0; min <= max; i++, min++)
			str[i] = min;
	}
	return (str);
}

