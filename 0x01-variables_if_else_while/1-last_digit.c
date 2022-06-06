#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 /* main - main block*/
 /*Description: prints a random number*/
 /*print if thelast digit of the radom number is zero greater or less then 5*/
 /*Return: 0*/
/*main function: start of the program*/
int main(void)
{
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, m);
	else if (m == 0)
		printf("Last digit of %i is %i and is 0\n", n, m);
	else
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, m);
	return (0);
}
