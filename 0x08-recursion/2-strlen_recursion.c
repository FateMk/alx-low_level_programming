#include "main.h"
/**
 * _strlen_recursion - _strlen_recursion block
 * @s: pointer type character
 * Return: 0 if s size is null 
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

