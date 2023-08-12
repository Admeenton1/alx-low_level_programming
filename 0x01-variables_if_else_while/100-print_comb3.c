#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: always 0 (Success)
 */

int main(void)

{

	int t, k;

	for (t = '0'; t <= '9'; t++)
	{
	
	for (k = t + 1; k <= '9'; k++)
	{
	if (k != t)
	{
	putchar(t);
	putchar(k);
	if (t == '8' && k == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
