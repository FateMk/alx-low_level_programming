#include "main.h"
/**
 * _strspn - _strspn block
 * @s: pointer type character
 * @accept: pointer type character
 * Description: gets the length of a prefix substring
 * Return: number of bytes in  s
 */
unsigned int _strspn(char *s, char * accept)
{
	int i;
	int j;
	int k;

	i = 0;
	for (j = 0; s[j] != '\0'; j++)
	{
		k = 0;
		while (accept[k] != '\0')
		{
			if (s[j] == accept[k])
			{
				i++;
				break;
			}
			k++;
		}
		if (accept[k] == '\0')
			break;
	}
	return (i);
}
