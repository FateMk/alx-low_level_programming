#include "main.h"

int _strlen(const char *s);
/**
 * binary_to_uint - converts binary number to an unsigned int
 * @b: pointer to string of 0 and 1 chars
 * Return: converted number
 */
 unsigned int binary_to_uint(const char *b)
 {
  int i, dcimal = 1, mul = 0;
  
  int len = _strlen(b);
  for (i = (len - 1) ; i >= 0; i--)
  {
   if (b[i] != '0' && b[i] != '1')
    return (0);
   if (b[i] == '1')
    mul += dcimal;
    dcimal *= 2;
  }
   return (mul);
 }
 int _strlen(const char *s)
 {
  int i;

  if (s == 0)
  return (0);
  while (s[i] != '\0')
  {
    i++;
  }
  return (i);
 }
