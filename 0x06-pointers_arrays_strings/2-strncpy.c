#include "main.h"
/**
 * _strncpy - copies a string src to dest upto n characters.
 * @dest: pointer type string.
 * @src: pointer type string.
 * @n: int type integer.
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
	for ( ; i != n; i++)
	{
		dest[i] = '\0';
        }
	return (dest);
}
