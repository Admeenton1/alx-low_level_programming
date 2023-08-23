#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenate the strings
 * @dest: The destination
 * @src: The source string
 * Return: A pointet to the resulting string d
 */

char *_strcat(char *dest, char *src)

{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}

	dest[dlen] = '\0';
	return (dest);
}
