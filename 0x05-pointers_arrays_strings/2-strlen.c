#include "main.h"
/**
 * _strlen - _strlen block
 * @s: pointer type integer
 * Description: returns length of string
 * Return: length of string
 */
int _strlen(char *s)
{
	int c;
/* for loop to the end of te string*/
	for (c = 0; s[c] != '\0'; c++);
	return (c);
}
