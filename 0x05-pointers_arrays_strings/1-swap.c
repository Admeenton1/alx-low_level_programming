#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * in a pointer address
 * @a: the first value
 * @b: the second value
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)

{
	int value = *a;
	*a = *b;
	*b = value;
}
