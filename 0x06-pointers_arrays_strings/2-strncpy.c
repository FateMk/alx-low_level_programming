#include "main.h"
/**
 * _strncpy - _strncpy block.
 * @dest: pointer type string.
 * @src: pointer type string.
 * @n: int type integer.
 * Descripti:on: copies a string src to dest upto n characters.
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	/* for loop */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; n > i; i++)
	{
		dest[i] = '\0';
        }
	return (dest);
}
