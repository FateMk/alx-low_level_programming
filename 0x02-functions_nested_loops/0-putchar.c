#include "main.h"
/**
 * main - main block
 * Description: print _putchar as out put
 * Return: 0
 */
int main(void)
{
	char a[] = "_putchar";
	int i;
	
	i = 0;
	while (a[i] != '\0')
	{
		_putchar(a[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
