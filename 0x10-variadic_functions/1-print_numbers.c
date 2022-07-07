#include "variadic_functions.h"
#include <stdarg.h>
/**
 * void print_numbers - prints number followed by a new line
 * @separator: tring to be printed between numbers
 * @n: number of integers passed to the function
 * Return: if separator is NULL don't print it
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int result;
	va_list ptr;
	
	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		result = va_arg(ptr, int);
		printf("%d", result);
		if (i != (n -1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);	
}
