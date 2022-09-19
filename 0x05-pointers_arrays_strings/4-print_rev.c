#include <stdio.h>
#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * fstcount is to first count to end, n is to count back
 * @s: str input
 * Return: string in reverse
 */
void print_rev(char *s)
{
	int fstcount = 0;
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		fstcount++;
	}

	for (n = (fstcount - 1); n >= 0; n--)
	{
		putchar(s[n]);
	}
	putchar('\n');
}
