#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - prints strings followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: if separator is NULL don't print it
 *         if one string is NULL print "(nil)" instead
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list ptr;
	char *str;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr, char*);
		if( str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
