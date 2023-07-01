#include "main.h"

/**
 * rot13 - encodes a string using ROT13 cipher
 * @str: input string
 * Return: encoded string
 */
char *rot13(char *str)
{
	int i;

	char *ptr = str;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (; *str != '\0'; str++)
	{
	for (i = 0; alpha[i] != '\0'; i++)
	{
		if (*str == alpha[i])
		{
			*str = rot13[i];
			break;
		}
	}
	}
return (ptr);
}
