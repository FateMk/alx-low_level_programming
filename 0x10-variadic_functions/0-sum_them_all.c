#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns sum of all its parameters
 * @n: integer
 * Return: 0 if n is equal to 0
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);
	va_list ptr;
	va_start(ptr, n);
	int sum = 0;
	unsigned int i;
	for (i = 0; i < n; i++)
	{
		int x = va_arg(ptr, int);
		sum += x;
	}
	va_end(ptr);
	return (sum);
}
