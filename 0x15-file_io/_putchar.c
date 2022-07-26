#include "main.h"
/**
 * _putchar - write to a file
 * @C: string to be printed
 * Return: 1
 */
 int _putchar(char c)
 {
    return (write(1, &c, 1));
 }