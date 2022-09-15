#include "main.h"
#include <stdio.h>

/**
 * print_diagonal -  a function that draws a diagonal line on the terminal
 *
 * @n: input number of times '\' should be printed
 *
 * Return: void
 *
 */
void print_diagonal(int n)
{
	int len, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (len = 1; len <= n; len++)
		{
			for (space = 1; space < co; space++)
			{
				putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
