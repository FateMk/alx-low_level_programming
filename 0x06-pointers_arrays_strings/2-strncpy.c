#include "main.h"
/**
 * _strncpy - copies n bytes of string src to dest. 
 * @dest: pointer type string.
 * @src: pointer type string.
 * @n: int type integer.
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; n > i; i++)
	{
		dest[i] = '\0';
        }
	return (dest);
}
