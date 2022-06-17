#include "main.h"
/**
 * reserve_array - reverse_array block
 * @a: pointer type integer
 * @n: int type integer
 * Description: reverses array of integers 
 * n is the number of elements of the array 
 */
void reverse_array(int *a, int n)
{
	int i, rev;
	/* reversing a sting by swapping*/
	for (n--, i = 0; i < n; i++, n--);
	{
		rev = a[i];
		a[i] = a[n];
		a[n] = rev;
	}
}

