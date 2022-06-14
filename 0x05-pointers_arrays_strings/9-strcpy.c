#include "main.h"
/**
 * _strcpy - _strcpy block
 * @dest: pointer type character
 * @src: pointer type character
 * Description: copies the string 
 */
char *_stscpy(char *dest, cahr *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

