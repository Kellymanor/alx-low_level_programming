#include <stdio.h>

/**
 * main - prints all possible combinations of all three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, l;

	for (n = 48; n < 58; n++)
	{
		for (m = 49; m < 58; n++)
		{
			for (l = 50; l < 58; l++)
			{
				if (l > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(l);
					if (n != 55 || m != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
}