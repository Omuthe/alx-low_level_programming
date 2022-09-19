#include "main.h"
/**
 * swap_int - main function
 * @a: Pointer with the address value
 * @b: Pointer with the address value
 * Description: This function takes a pointer to int as parameter
 * and updater the value it points to 98
 * Return: none
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
