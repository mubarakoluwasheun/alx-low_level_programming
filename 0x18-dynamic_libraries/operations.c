#include <stdio.h>

/**
 * add - Adds two integers
 * @a: First integer
 * @b: Second integer
 * Return: Result of addition
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Subtracts two integers
 * @a: First integer
 * @b: Second integer
 * Return: Result of subtraction
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Multiplies two integers
 * @a: First integer
 * @b: Second integer
 * Return: Result of multiplication
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Divides two integers
 * @a: First integer (dividend)
 * @b: Second integer (divisor)
 * Return: Result of division
 */
int div(int a, int b)
{
	if (b == 0)
	{
		fprintf(stderr, "Error: Division by zero\n");
		return (0);
	}
	return (a / b);
}

/**
 * mod - Computes the modulus of two integers
 * @a: First integer (dividend)
 * @b: Second integer (divisor)
 * Return: Result of modulus operation
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		fprintf(stderr, "Error: Modulo by zero\n");
		return (0);
	}
	return (a % b);
}
