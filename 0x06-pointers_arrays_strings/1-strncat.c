#include "main.h"
/**
 * _strncat - _strncat block
 * @dest: pointer type string.
 * @src: pointer type string.
 * @n: int type integer.
 * Description: concatenate two strings will use at most n bytes from src.
 * src does not need to be null-terminated i contains n  or more bytes.
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	/* looping both through dest and src*/
	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0' && n > 0; j++, n--, i++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
