#include "main.h"
/**
 * _putchar - writes a file
 * @c: string
 * Return: 1
 */
 int _putchar(char c)
 {
    return (write(1, &c, 1));
 }