#include "main.h"
/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @n: pointer to decimal number to change
 * @index: index position to change
 * Return: 1 if it worked, -1 if error
 */
 int clear_bit(unsigned long int *n, unsigned int index)
 {
    if (*n == 0)
    {
        return (-1);
    }
    else
    {
    *n &= ~(1 << index);
    return (*n);
    }
    return (1);
 }
