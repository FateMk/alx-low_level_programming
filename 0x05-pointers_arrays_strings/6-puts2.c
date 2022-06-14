#include "main.h"
/**
 * puts2 - puts2 block
 * @str: pointer type string
 * Description: prints every string character starting
 * with the first character followed by a new line
 */
void puts2(char *str)
{
	int i , j;

	for (i = 0; str[i] != '\0'; i++)
	{
		if(i % 2 == 0)
		{
			j += str[i];
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
