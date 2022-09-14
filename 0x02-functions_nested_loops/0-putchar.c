#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char word = "_putchar";

	while (word)
	{
		_putchar(word);

		word++;
	}
	_putchar("\n");

	return (0);
}
