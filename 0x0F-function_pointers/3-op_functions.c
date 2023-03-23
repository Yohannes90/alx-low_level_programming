#include "3-calc.h" 

/**
 * op_add - add two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of a an b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculate difference of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: dfference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides an integer
 * @a: first integer
 * @b: second integer
 *
 * Return: quotient
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculate modulo of an integer
 * @a: first integer
 * @b: second integer
 *
 * Return: a % b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
