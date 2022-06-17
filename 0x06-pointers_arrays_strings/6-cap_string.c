#include "main.h"
/**
 * cap_string - function returning  pointer to a char
 * @s: pointer type character
 * Description: capitalizinging all words of a string
 * Return: s.
 */
char *cap_string(char *s)
{
	int i, j, count;
	i = count = 0;
	/* for loop*/
	for (i = 0; s[i] != '\0'; i++)
		;
	for (j = 0; j < i; j++)
	{
		if (count == 0)
		{
			if (s[j] >= 'a' && s[j] <= 'z')
				s[j] = s[j] - 32;
		else
			count++;
		}
		if (s[j] == '!' || s[j] == '"' || s[j] == '(' || s[j] == ')' || s[j] == ',' || s[j] == '.' || s[j] == '{' || s[j] == '}' || s[j] == ';' || s[j] == '?' || s[j] == '\n' || s[j] == '\t' || s[j] == ' ')
			count = 0;
		else
			count++;
	}
	return (s);
}
