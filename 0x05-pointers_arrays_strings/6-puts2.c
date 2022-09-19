#include "main.h"
/**
 * puts2 - main function
 * @str: Pointer, the string to print
 * Prints every character of a string divisible by 2
 */
void puts2(char *str)
{
	int i;

	while (str[i])
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
		i++;
	}
	putchar('\n');
}
