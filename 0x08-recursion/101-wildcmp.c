#include "main.h"

int strlen_n(char *str);
void iterate_w(char **wstr);
char *postfix(char *str, char *pfix);
int wildcmp(char *s1, char *s2);

/**
 * strlen_n - Returns the length of a string,
 *                   ignoring wildcard characters.
 * @str: The string to be measured.
 *
 * Return: The length.
 */
int strlen_n(char *str)
{
	int len = 0, i= 0;

	if (*(str + i))
	{
		if (*str != '*')
			len++;

		i++;
		len += strlen_n(str + i);
	}

	return (len);
}

/**
 * iterate_wild - Iterates through a string located at a wildcard
 *                until it points to a non-wildcard character.
 * @wstr: The string to be iterated through.
 */
void iterate_w(char **wstr)
{
	if (**wstr == '*')
	{
		(*wstr)++;
		iterate_w(wstr);
	}
}

/**
 * postfix - Checks if a string str matches the postfix of
 *                 another string potentially containing wildcards.
 * @str: The string to be matched.
 * @pfix: The postfix.
 *
 * Return: If str and postfix are identical - a pointer to the null byte
 *                                            located at the end of postfix.
 *         Otherwise - a pointer to the first unmatched character in postfix.
 */
char *postfix(char *str, char *pfix)
{
	int str_len = strlen_n(str) - 1;
	int pfix_len = strlen_n(pfix) - 1;

	if (*pfix == '*')
		iterate_w(&pfix);

	if (*(str + str_len - pfix_len) == *pfix && *pfix != '\0')
	{
		pfix++;
		return (postfix(str, pfix));
	}

	return (pfix);
}

/**
 * wildcmp - Compares two strings, considering wildcard characters.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared - may contain wildcards.
 *
 * Return: If the strings can be considered identical - 1.
 *         Otherwise - 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		iterate_w(&s2);
		s2 = postfix(s1, s2);
	}

	if (*s2 == '\0')
		return (1);

	if (*s1 != *s2)
		return (0);

	return (wildcmp(++s1, ++s2));
}

