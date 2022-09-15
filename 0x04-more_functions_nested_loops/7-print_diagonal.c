#include "main.h"
#include <stdio.h>

/**
 * print_diagonal -  a function that draws a diagonal line on the terminal
 *
 * @n: input number of times '\' should be printed
 *
 * Return: a diagonal
 *
 */
oid print_diagonal(int n)
{
	int length = 0;
	int spaces;

	if (n > 0)
	{
		for (length = 1; length < n; length++)
		{
			for (spaces = 1; spaces < length; spaces++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
