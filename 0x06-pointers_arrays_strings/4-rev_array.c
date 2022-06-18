#include "main.h"
/**
 * reserve_array - reverse_array block
 * @a: pointer type integer
 * @n: number of elements of the array 
 * Description: reverses array of integers 
 */
void reverse_array(int *a, int n)
{
	int i, rev;
	n--;
	for (i = 0; i < n; i++, n--)
	{
		rev = a[i];
		a[i] = a[n];
		a[n] = rev;
	}
}
