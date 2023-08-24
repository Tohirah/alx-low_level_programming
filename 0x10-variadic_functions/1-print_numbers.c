#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints int data
 * @n: No of arguments
 * @separator: seperator between the numbers
 * Return: return 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	/* creating va_list to store the variable argument list */
	va_list nums;
	unsigned int counter;

	/* initialize the va_list for the number of arguments */
	va_start(nums, n);


	for (counter = 0; counter < n; counter++)
	{
		printf("%d", va_arg(nums, unsigned int));
		if (counter < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(nums);
	printf("\n");
}
