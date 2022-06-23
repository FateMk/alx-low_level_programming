#include "main.h"
/**
 * _print_rev_recursion - _print_rev_recursion block
 * @s: pointer type character
 * Description: prints a string in reverse
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
