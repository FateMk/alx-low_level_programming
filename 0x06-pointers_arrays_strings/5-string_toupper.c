#include "main.h"
/*
 * string_toupper - changes all lowercase letters to uppercase
 * @str: string to be converted to uppper
 * Return: str.
 */
char *string_toupper(char *str)
{
	int i;
	/*for loop*/
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	return (str);
}
