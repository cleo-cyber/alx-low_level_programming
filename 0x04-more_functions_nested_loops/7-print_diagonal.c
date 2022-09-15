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
void oid print_diagonal(int n)
{
	if (n > 0)
	{
		while (length < n)
		{
			for (spaces = 0; spaces < length; spaces++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			length++;
		}
		else
		{
			_putchar('\n');
		}
	}
}
