#include "main.h"
/**
 * puts_half - puts_half block
 * @str: pointer type string
 * Description: print half a string followed by a new line
 * print the second half of the string
 * if number of characters is odd print the last n characters of string
 */
void puts_half(char *str)
{
	int i , n;
	
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	n = (i - 1) / 2;
	i = n;
	while(i > n)
	{
		if(i % 2 != 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}


