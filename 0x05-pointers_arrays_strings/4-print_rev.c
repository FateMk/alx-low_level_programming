#include "main.h"
/**
 * print_rev - print_rev block
 * @s: pointer type string
 * Description: prints a string in reverse 
 * follwed by a new line
 */
void print_rev(char *s)
{
       	int i, j;
	char *start_s, *end_s, rev;
	
	j = _strlen(s);/*for loop to loop through the string to the right*/
	start_s = s;
	end_s = s;
	for(i = 0; i < j- 1; i++)
		end_s++;
    /*swap char from start to end */
    /*index using start_s and end_s*/
	for(i = 0; i < j/2; i++)
	{
		rev = *end_s;
		*end_s = *start_s;
		*start_s = rev;
        /*update pointer positions*/
	       	start_s++;
		end_s--;
	}
}
