#include <stdio.h>
/**
 * main - main block
 * Description: prints from one too 100 followed by a new line
 * for multiples of and 5 print Fizz and Buzz respectively
 * for the numbers mutiples of both three and five print FizzBuzz
 * Returns: 0
 */
int main(void)
{
	int i;
/* for loop*/
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0){
			printf("FizzBuzz");
		}else if (i % 3 == 0)
		{
			print(f"Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
