#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: pointer type string
 * @s2: pointer type string
 * Return: if concatenation fails - NULL.
 *        else a to pointer the newly-allocated soace in memory
 *        containing the concatenated strings.
 */
char *str_concat(char *s1, char *s2)
{
	int a, j = 0, k = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
	       s2 = "";
	for (a = 0; s1[a] || s2[a]; a++)
		k++;

	s = malloc(sizeof(char) * k);
	if (s == NULL)
		return (NULL);

	for (a = 0; s1[a]; a++)
		s[j++] = s1[a];
	for (a = 0; s2[a]; a++)
		s[j++] = s2[a];
	return (s);
}
