#include "main.h"
/**
 * _memcpy - _memcpy block
 * @dest: pointer type character
 * @src: pointer type character
 * @n: number of bytes to copied
 * Description: copies memory are
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	char *d;
	
	i = 0;
	d = dest;
	while (n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	return (d);
}
