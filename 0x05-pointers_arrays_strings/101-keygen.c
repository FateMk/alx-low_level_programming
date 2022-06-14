#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Description: generates random valid password for the program 101-crackme
 * allowed to use a standard library
 */
int main(void)
{
	int m, c, t;

	srand(time(NULL));
	for (c = 0, t = 2772; t > 122; c++)
	{
		m = (rand() % 125) + 1;
		printf("%c", m);
		t -= m;
	}
	printf("%c", t);
	return (0);
}
