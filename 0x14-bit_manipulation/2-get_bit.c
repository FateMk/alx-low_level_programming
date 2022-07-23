#include "main.h"
/**
 * get_bit - returns the value of a bit at agiven index
 * @n: decimal number to be converterd first
 * @index: index starting from 0 
 * Return: value at index "index" or
 *          -1 if an error occured
 */
 int get_bit(unsigned long int n, unsigned int index)
 {
    int bit;

    if (index > 64)
    {
        return (-1);
    }
    bit = (n >> index) & 1;
    return (bit);  
}

 