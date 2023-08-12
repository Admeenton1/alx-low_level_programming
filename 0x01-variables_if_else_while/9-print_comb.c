#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: always 0 (Success)
 */

int main(void)

{

	int r;

	for (r = '0'; r <= '9'; r++)
	{
	putchar(r);
	if (r != '9')
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');

	return (0);
}

