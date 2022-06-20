#include "main.h"
/**
 * _strchr - _strchr block
 * @s: pointer type string
 * @c: character
 * Description: locates a character in a string.
 * return: null  if charcter is not found
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
	}
	return (s+ 1);
}
