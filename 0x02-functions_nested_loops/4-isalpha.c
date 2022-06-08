#include "main.h"
/**
 * _isalpha - _isalpha block
 * Description: Checks for alphabetic character.
 * Return: 1 else Return: 0
 */
int _isalpha(int c)
{
	if ((c > 96 && c <=122) || (c > 64 && c <=90))
		return (1);
	else
		return (0);
}

