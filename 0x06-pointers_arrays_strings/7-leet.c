#include "main.h"

/**
 * leet - encode a string into 1337
 * @s: string
 * Return: encoded string `s`
 */

char *leet(char *s)
{
	int let1 = 0, let2;
	char leet[5] = {'a', 'e', 'o', 't', 'l'};
	char code[5] = {'4', '3', '0', '7', '1'};

	for (; *(s + let1) != '\0'; let1++)
	{
		for (let2 = 0; let2 < 5; let2++)
		{
			if (*(s + let1) == *(leet + let2) || *(s + let1) == *(leet + let2) - 32)
			{
				*(s + let1) = *(code + let2);
			}
		}
	}
	return (s);
}
