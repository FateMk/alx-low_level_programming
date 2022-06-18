#include "main.h"
/*
 * string_toupper - string_toupper block
 * @str: string to be converted to uppper
 * Description: changes all lowercase letters to uppercase
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
