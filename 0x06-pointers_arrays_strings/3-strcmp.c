#include "main.h"
/**
 * _strcmp - _strcmp block.
 * @s1: pointer type character.
 * @s2: pointer type character.
 * Description: compares two strings and should work exactly like strcmp.
 * Return: 0 
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	/*for loop looping either through s1 or s2*/
	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}			
