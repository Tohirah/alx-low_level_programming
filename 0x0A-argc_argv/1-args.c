#include <stdio.h>

/**
 * main - print argument count
 * @argc: argument count
 * @argv: argument array
 *
 */

int main(int argc, char *argv[])
{
	int count, num = 0;

	for (count = 0; count < argc; count++)
	{
		if (count == 0)
		continue;

		num += 1;
	}

	printf("%d\n", count - 1);

	return (0);
}
