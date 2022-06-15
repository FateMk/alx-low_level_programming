#include "main.h"
/**
 * _strcat - _strcat block
 * @dest: pointer type character
 * @src: pointer type character
 * Description: concatenates two strings
 * Appends the src string to the dest string
 * Overwrites the terminating null byte(\o) at the end of dest
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int a, b;
	/*for loop*/
	for (a = 0; dest[a] != '\0'; ++a)
	{
	}
	for (b = 0; src[b] != '\0'; ++b, ++a)
	{
		dest[a] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}

