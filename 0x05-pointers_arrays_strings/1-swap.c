#include "main.h"
/**
 * @a: pointer type integer
 * @b: pointer type integer
 * Description: swaps values of two integers
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
