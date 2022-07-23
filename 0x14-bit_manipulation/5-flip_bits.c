#include "main.h"
/**
 * flip_bits - flip bits to convert one number to another number
 * @n: first number
 * @m: second number to convert to
 * Return: number of bits that was needed to flip
 */
 unsigned int flip_bits(unsigned long int n, unsigned long int m)
 {
    int z, count = 0;

     for (z = n ^ m; z !=  0; z = z >> 1)
     {
        count += z & 1;
     }
     return count;
 }
 