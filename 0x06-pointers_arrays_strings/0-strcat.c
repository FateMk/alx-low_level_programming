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
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = dest[a] + src[a];
	}
	dest[a] = '\0';
	return (dest);
}
