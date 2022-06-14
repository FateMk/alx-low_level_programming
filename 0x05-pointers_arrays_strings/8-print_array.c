#include <stdio.h>
/**
 * print_array - print_array block
 * @a: pointer type integer
 * @n: pointer type integer
 * Description: prins n elements of an array followed by a new ine
 * n is th number of elemnts of the array.
 * numbers will be separated by comma followed by space
 * should be displayed in the same order as they are stored in array
 * use printf
 */
void print_array(int *a, int n)
{
	int i = 0;
	/*looping through the array*/
//	for (n--; n >= 0; n--, i++)

	for(i = 0; i >= 0; i++)
	{
		
		while (n >= 0)
		{
			printf("%d",a[i]);
			if (n > 0 )
			{
				printf(", ");
			}
			n++;
		}
	}
	printf("\n");
}
int main(void)
{
    int array[5];

    array[0] = 98;
    array[1] = 402;
    array[2] = -198;
    array[3] = 298;
    array[4] = -1024;
    print_array(array, 5);
    return (0);
}
