#include "3-calc.h"
/**
 * op_add - adds two integers
 * @a: integer
 * @b: integer
 * Return: sum
 */
int op_add(int a, int b)
{
	int sum;
	
	sum = a + b;
	return (sum);
}
/**
 * op_sub - substraction function
 * @a: integer
 * @b: integer
 * Return: dif of and b
 */
int op_sub(int a, int b)
{
	int dif;

	dif = a - b;
	return (dif);
}
/**
 * op_mul - multiplication
 * @a: integer
 * @b: integer
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	int product;

	product = a * b;
	return (product);
}
/**
 * op_div - division
 * @a: integer
 * @b:integer
 * Return: division of a and b
 */
int op_div(int a, int b)
{
	int division;

	division = a / b;
	return (division);
}
/**
 * op_mod - remainder of a division
 * @a: integer
 * @b: integer
 * Return: mod
 */
int op_mod(int a, int b)
{
	int mod;

	mod = a % b;
	return (mod);
}
