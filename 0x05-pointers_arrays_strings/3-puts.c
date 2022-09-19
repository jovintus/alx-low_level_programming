#include <stdio.h>
#include "main.h"

/**
 * _puts - a function that prints a string
 * @str: string input
 * Return: string
 */
void _puts(char *str)
{
	int i=0;
	while (str[i] != '\n' && str[i] != '\0')
	{
	   putchar(str[i]);
	   i++;
	}
}
