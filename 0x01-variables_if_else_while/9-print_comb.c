#include <stdio.h>

/**
 * main - print all possible combinations of single-digit numbers
 *
 * Return: Aways 0 (Success)
 */
int main(void)
{
	int i;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
