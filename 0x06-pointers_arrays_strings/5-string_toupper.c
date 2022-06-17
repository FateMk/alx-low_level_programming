#include "main.h"
/**
 * string_toupper - function returning apointer to a char 
 * @str: pointer type character
 * Description: changes all lowercase letter to uppercase
 */
char *string_toupper(char *str)
{
	int i;
	/*looping through thr string*/
	for(i = 0; str[i] != '\0'; i++)
	{	
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
}
