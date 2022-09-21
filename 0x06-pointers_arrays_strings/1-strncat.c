#include "main.h"
/**
 * _strncat - function
 * @dest: destination
 * @src: Source
 * @n: variable
 * Ruturn: Destination
 */
/**------------------Hello------World--1||1024*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int tam = 0;
	int r = 0;

	for (; dest[tam];)
	{
		tam++;
}
	while (r < n && src[r])
	{
		dest[tam + i] = src[r];
		i++;
		r++;
	}
	return (dest);
}
