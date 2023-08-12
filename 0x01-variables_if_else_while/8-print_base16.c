#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: always 0 (Success)
 */

int main(void)

{

	int a;
	char t;

	for (a = '0'; a <= '9'; a++)
	putchar(a);

	for (t = 'a'; t <= 'f'; t++)
	putchar(t);
	putchar('\n');

	return (0);

}
