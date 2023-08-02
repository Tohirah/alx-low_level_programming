#include "main.h"

/**
 * factorial - calculate factorial of a number
 * @n: number to be calculated
 *
 * Return: return factorial result
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else
		return (factorial(n - 1) * n);
}
