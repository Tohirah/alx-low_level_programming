#include <stdio.h>

/**
 * main - prints highest prime number 612852475143
 * Return: return 0
 */

int main(void)
{
	long no = 612852475143;

	while (divide++ < no / 2)
	{
		if (no % divide == 0)
		{
			no /= 2;
			continue;
		}

		for (divide = 3; divide < no / 2; divide += 2)
		{
			if (no % divide == 0)
			no /= divide;
		}
	}
	printf("%ld\n", no);
	return (0);
}
