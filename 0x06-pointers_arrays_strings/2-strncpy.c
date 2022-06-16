#include "main.h"
/**
 * _strncpy - _strncpy block
 * @dest: string
 * @src: string
 * @n: int type integer
 * Description: copies a string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	/* for loop */
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for(; n > i; i++)
	{
		dest[i] = '\0';
        }
	return (dest);
}
