#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints product of 2 arguments
 * @argc: argument count
 * @argv: argument vector or array
 *
 * Return: return 0
 */

int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num2 = 1;

		for (num1 = 1; num1 < 3; num1++)
			num2 *= atoi(argv[num1]);

		printf("%d\n", num2);
	}

	return (0);
}
