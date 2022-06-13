#include "main.h"
/**
 * swap_int - swap_int block
 * @a: pointer of type integer
 * @b: pointer of type integer
 * Description: swaps values of two integers
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
