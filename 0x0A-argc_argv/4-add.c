#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main - adds positive numbers only
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: return 1 or 0
 */

int main(int argc, char *argv[])
{
	int num1, num2, length, sum;
	char *ptr;

	if (argc == 1)
		printf("0\n");
	else
	{
		sum = 0;
		for (num1 = 1; num1 < argc; num1++)
		{
			ptr = argv[num1];
			length = strlen(ptr);

			for (num2 = 0; num2 < length; num2++)
			{
				if (isdigit(*(ptr + num2)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(argv[num1]);
		}

	printf("%d\n", sum);
	}
	return (0);
}
