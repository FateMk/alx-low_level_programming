#include<stdio.h>
#include <time.h>
/* *
 * main - main block
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n>5)
		printf("%i and is greater than 5\n", n);
	else if (n=0)
		printf("%i and is 0\n", n);
	else
		printf("%i and is les tham 6 and not 0\n", n);

	return (0);
}
