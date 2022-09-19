#include "main.h"
/**
 * print_rev - main function
 * @s: points the string to print
 * Description: This function prints a string in reverse
 */
void print_rev(char *s)
{
	int count = 0;

	while (s[count])
	{
		count++;
	}
	count--;
	for (; count >= 0; count--)
	{
		putchar(s[count]);
	}
	putchar('\n');
}
