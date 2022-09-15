#include "main.h"
/**
 * print_most_numbers - function
 *
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if ((n != 2) && (n != 4))
			putchar(n + '0');
	}
	putchar('\n');
}
