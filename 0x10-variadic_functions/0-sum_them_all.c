#include "variadic_functions.h"
/**
 * sum_them_all - returns sum of all its parameters
 * @n: integer
 * Return: sum or 0 if n is equal to 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list ptr;
	
	va_start(ptr, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ptr, int);
	if (n == 0)
		return (0);
	va_end(ptr);
	return (sum);
}
