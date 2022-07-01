#include "main.h"
#include <stdio.h>

int _strlen(char *s);
char *string_nconcat(char *s1, char *s2, unsigned int n);
/**
 * string_nconcat - concatenates two string
 * @s1: pointer type characcter
 * @s2: pointer type character
 * @n: integer size
 * Return: NULL if the function fails
 *         if n >= length of s2 use entire string s2
 *         if NULL is passed treat it as an empty string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	int i, j, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len = (unsigned int)_strlen(s1);
	str = malloc(sizeof(char) * (len + n + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0, j = 0; i < (len + n); i++)
	{
		if (i < len)
			str[i] = s1[i];
		else
			str[i] = s2[j++];
	}
	str[i] = '\0';
	return (str);
}
/**
 * _strlen - finds length of a string
 * @s: string
 * Return: length of string
 */ 
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
