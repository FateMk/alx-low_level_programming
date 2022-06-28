#include "main.h"
#include <stdlib.h>
/**
 * _strdup - _strdup block
 * @str: pointer type string
 * Description: returns a pointer to a newly allocated space in memory
 * Return: NULL if str is equal to NULL
 *         NULL if insufficient menory was available
 *         else pointer to the duplicate string
 */
char *_strdup(char *str)
{
	int j, size = 0;
	static char *s;
	/*trdup() is used to duplicate a string. It returns a pointer to null-terminated byte string*/
	if (str == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		size++;
	s = malloc(sizeof(char) * (size + 1));
	if (s == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		s[j] = str[j];
	s[size] = '\0';
	return (s);
}
