#include "main.h"
int _strlen(char *s);
int pali(char *s, int i);
/**
 * is_palindrome - is_palidome block
 * @s:pointer type integer
 * Return: 1 if a string is a palindrome else 0 if not
 */
int is_palindrome(char *s)
{
	int len;
	/* palindrome function*/
	len = _strlen(s) - 1;
	return (pali(s, --len));
}
/**
 * pali - recursive check of palindrome
 * @s: string
 * @i: length of string
 * Return: 1 if pa;indrome, 0 if not
 */
int pali(char *s, int i)
{
	if (*s == *(s + i))
		if (i <= 0)
			return (1);
		else
			return (pali(s + 1, i - 2));
	else
		return (0);
}
/**
 * _strlen - gets the length of string
 * @s: string
 * Return: length of the string
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (1 + _strlen(s + 1));
}
