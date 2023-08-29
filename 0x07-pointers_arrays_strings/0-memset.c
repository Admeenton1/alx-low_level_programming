#include "main.h"

/**
 * _memset - Entry point
 * @s: pointed destinaion
 * @b: contant byte
 * @n: bytes
 * Reurn: Always 0 (success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
