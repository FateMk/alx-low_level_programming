#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: pointer type character
 * Return: str.
 */
char *cap_string(char *str)
{
	int i, j, count;
	
	i = count = 0;
	while (str[i] != '\0')
		i++;
	for (j = 0; j < i; j++)
	{
		if (count == 0)
		{
			if (str[j] >= 'a' && str[j] <= 'z')
				str[j] = str[j] - 32;
			else
				count++;
		}
		if (str[j] == '!' || str[j] == '"' || str[j] == '(' || str[j] == ')' || str[j] == ',' || str[j] == '.' || str[j] == '{' || str[j] == '}' || str[j] == ';' || str[j] == '?' || str[j] == '\n' || str[j] == '\t' || str[j] == ' ')
			count = 0;
		else
			count++;
	}
	return (str);
}
