#include "main.h"

/**
 * print_numbers - prints numbers in a range
 * Retrurn: The numbers sine 0 to 9
 */

void print_numbers(void)

{
	int k;

	for (k = 0; k <= 9; k++)
	{
	_putchar(k + '0');
	}
	_putchar('\n');
}
