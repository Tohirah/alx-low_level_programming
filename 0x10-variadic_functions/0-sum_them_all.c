#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: No of arguments
 * Return: return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	/* creating va_list to store the variable argument list */
	va_list nums;
	unsigned int counter;
	int sum;

	if (n == 0)
		return (0);
	sum = 0;


	va_start(nums, n);

	for (counter = 0; counter < n; counter++)
		sum += va_arg(nums, int);
	va_end(nums);
	return (sum);
}
