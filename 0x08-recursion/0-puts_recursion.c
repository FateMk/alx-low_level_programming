#include "main.h"
/**
 * _puts_recursion - _puts_recursion block
 * @s: pointer type character
 * Description: prints a string followed by a new line
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}

