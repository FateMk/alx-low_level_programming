#include "main.h"

/**
 * reverse_array - reverse the contents of an array of integers.
 * @a: an array of integers.
 * @n: the number of elements to swap.
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int i, temp;
	
	n--;
	
	for (i = 0; i < n; i++, n--)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
