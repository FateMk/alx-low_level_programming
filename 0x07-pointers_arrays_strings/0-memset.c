#include "main.h"
/**
 * _memset - _memset block
 * @n: number of  bytes of memory  to be filled first
 * @b: char type character
 * @s: pointer type string
 * Description: fill memory with a constant value
 * Returns: Pointer to memory area `s`
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	/* whhile loop*/
	i = 0;
	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
