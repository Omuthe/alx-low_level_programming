#include "main.h"
/**
 * _puts - main function
 * @str: pointer with address value
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str++);
	}
	putchar('\n');
}
