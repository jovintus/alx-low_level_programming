#include "main.h"

/**
 * _puts - a function that prints a string
 * @str: string input
 * Return: string
 */
void _puts(char *str)
{
	int v = 0;

	while (v >= 0)
	{
		if (*(str + v) == '\0')
			break;
		_putchar(*(str + v));
		v++;
	}
	_putchar('\n');
}
