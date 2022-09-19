#include "main.h"
/**
 * _strlen - main function
 * @s: pointer with the address value
 * Description: Updates to 98
 * Return: None
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
