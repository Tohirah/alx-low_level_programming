#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - prints minimum number of coins
 * to make change
 * @argc: argument counter
 * @argv: argument vector or array
 *
 * Return: return 1 or 0
 */

int main(int argc, char *argv[])
{
	int array[] = {25, 10, 5, 2, 1};
	int num1, cent;
	int count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);
	if (cent < 0)
	{
		printf("0\n");
	}
	for (num1 = 0; num1 < 5; num1++)
	{
		if (cent >= array[num1])
		{
			count += (cent / array[num1]);
			cent = cent % array[num1];
		}
		if (cent == 0)
		{
			printf("%d\n", count);
			break;
		}
	}
	return (0);
}
