#include "main.h"

/**
 * _strcmp - Compares pointers to strings.
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return: If str1 < str2, the negative difference of the first unattached characeter
 * if str1 == str2, 0.
 * if str1 > str2, the positive difference of unattched characters
 *
 */

int _strcmp(char *s1, char *s2)

{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
