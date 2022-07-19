#include <stdio.h>
#include <stdlib.h>
void __attribute__((constructor)) print_out(void);
/**
 * print_out - prints string before the executing main function 
 * 
 */
 void print_out(void)
 {
    
    printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");

 }