#include "main.h"
/**
 * print_binary - prints the binary representation of a number 
 * @: long  unsigned integer
 */
 void print_binary(unsigned long int n)
 {
     //int i = CHAR_BIT * sizeof(n);
     //while (i--)
     //{
      //  putchar('0' + ((n >> i) & 1));
     //}
    unsigned long int temp;
	int shifts;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (temp = n, shifts = 0; (temp >>= 1) > 0; shifts++)
		;

	for (; shifts >= 0; shifts--)
	{
		if ((n >> shifts) & 1)
			printf("1");
		else
			printf("0");
	}
}
