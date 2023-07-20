#include <stdio.h>

/**
 * main - prints highest prime number 612852475143
 * Return: return 0
 */

int main(void)
{
	long num = 612852475143;

	int divi;
	
	while (divi++ < num / 2)
	{
		if (num % divi == 0)
		{
			num /= 2;
			continue;
		}

		for (divi = 3; divi < num / 2; divi += 2)
		{
			if (num % divi == 0)
				num /= divi;
		}
	}
	printf("%ld\n", num);
	return (0);
}
