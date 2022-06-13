#include "main.h"
#include <string.h>
/**
 * _strlen - _strlen block
 * @s: pointer type integer
 * Description: returns length of string
 */
int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++);
	return (c);
}
