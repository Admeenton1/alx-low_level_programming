#include "main.h"

/**
 * _isdigit - Checks digit status
 * @r: The number to check
 * Return: 1 for digit and 0 for anything else
 */

int isdigit(int r)

{
	if (r >= 48 && r <= 57)
	{
	return (1);
	}
	return (0);
}
