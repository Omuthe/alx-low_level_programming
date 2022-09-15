#include "main.h"
/**
 * _isupper - a function that checks uppercase
 * @c: input
 * Return: 1 if c is uppercase, 0 if itherwise
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
