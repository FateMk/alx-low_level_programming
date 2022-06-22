#include <ustdio.h>
#include "main.h"
/**
 * _putchar - _putchar block
 * @c: character
 * Return: 1 on sucess and -1 on error
 */
int _putchar(char c)
{
	return(write (1, &c, 1));
}
