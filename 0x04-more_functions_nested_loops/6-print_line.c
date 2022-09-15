#include "main.h"
/**
 * print_line - function that prints a straight line
 * @n: takes in an integer
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
		{
			putchar('_');
		}
		else
		{
			putchar('\n');
		}
	}
	putchar('\n');
}
