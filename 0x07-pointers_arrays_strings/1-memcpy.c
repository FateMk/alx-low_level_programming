#include "main.h"
/**
 * _memcpy - _memcpy block
 * @dest: pointer type character
 * @src: pointer type character
 * n: number of bytes to copied
 * Description: copies memory are
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	
	i = 0;
	while (n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	return (dest);
}
