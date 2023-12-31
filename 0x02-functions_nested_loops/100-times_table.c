#include "main.h"

/**
 * print_times_table - Prints the times table of the input,
 * starting with 0.
 * @n: The value of the times table to be printed
 */

void print_times_table(int t)

{
	int n, m, p;

	if (t >= 0 && t <= 15)
	{
	for (n = 0; n <= t; n++)
	{
	_putchar('0');
	for (m = 1; m <= t; m++)
	{
	_putchar(',');
	_putchar(' ');
	p = n * m;
	if (p <= 99)
	_putchar(' ');
	if (p >= 100)
	{
	_putchar((p / 100) + 0);
	_putchar(((p / 10)) % 10 + '0');
	}
	else if (p <= 99 && p >= 10)
	{
	_putchar((p / 10) + '0');
	}
	_putchar((p % 10);
	}
	_putchar('\n');
	}
	}
}
