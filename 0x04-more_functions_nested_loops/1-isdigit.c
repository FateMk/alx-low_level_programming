#include "main.h"
/**
 * _isdigit - _isdigit block
 * @c: int type integer
 * Return: 1 if is c otherwise return 0
 */
int _isdigit(int c)
{
	int i;

	i=0;
	while(i < 10)
	{
		if(c == i)
			return (1);
		else
			return (0);
		i++;
	}
}
