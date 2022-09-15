#include "main.h"
#include <stdio.h>

/**
 * _isupper - _isupper for uppercase character
 *
 * @c: input
 *
 * Return: 1-c is uppercase, 0 Always (Success)
 */
int _isupper(int c)
{
	if (c > = 'A' && c < = 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
