#include "main.h"
/**
 * _strcpy - _strcpy block
 * @dest: pointer type character
 * @src: pointer type character
 * Description: Copy the string pointed to by pointer `src` to
 * the buffer pointed to by `dest`
 * Return: Pointer to `dest`
 */
char *_stscpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

