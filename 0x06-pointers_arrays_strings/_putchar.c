#include "main.h"
/**
 * _putchar - _putchar block
 * @c: char type character
 * Return: On success 1.
 * On error  -1 is returned.
 */
int _putchar(char c)
{
       	return(write(1, &c, 1));
}
