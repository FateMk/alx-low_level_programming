#include <stdio.h>
/**
 * _strstr - _strstr block
 * @haystack: pointer type character
 * @needle: pointer type character
 * Description: locates a substring
 * Return: Pointer to beginning of substring, or NULL if not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	i = 0;
	k = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j + k] != '\0' && haystack[i + k] != '\0'
		       && needle[j + k] == haystack[i + k])
		{
			if (haystack[i + k] != needle[j + k])
				break;
			k++;
		}
		if (needle[j + k] == '\0')
			return (&haystack[i]);
		j++;
		i++;
	}

	return (NULL);
}
