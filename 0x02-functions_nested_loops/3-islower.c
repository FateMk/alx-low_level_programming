#include "main.h"
/*
 * _islower - islower block
 * Description: checks if a character is lowercase
 * Return: 1 
 * else Return: 0
 */
int _islower(int c)
{
	if (c > 96 && c <= 122 )
		return (1);
	else
		return (0);
}
