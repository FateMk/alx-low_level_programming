#include <stdio.h>
/**
 * _strpbrk - _strpbrk block
 * @s: pointer type string
 * @accept: pointer type string
 * Description: searches a string for any of a set of bytes
 * Return: pointer in s matching accept, Null if not found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *ss;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				ss = &s[i];
				return (ss);
			}
			j++;
		}
		i++;
	}

	return (0);
}
