#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * Description:  print the letters of the alphabet except e, q
 *
 * Return: Always 0 (Success)
 */

int main(void)

{

	char i;

	for (i = 'a'; i <= 'z'; ++i)

	{

		if (i == 'e' || i == 'q')

		{
			continue;


		}
		else
		{
			putchar(i);
		}


	}

	putchar('\n');

	return (0);

}
