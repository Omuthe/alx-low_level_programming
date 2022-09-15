#include "main.h"
/**
 * print_number - function
 * @n: input value to check
 * Return: nothing.
 */
void print_number(int n)
{
	unsigned int num = n;
	 /* first check if its negative */
	  if (n < 0)
	  {
		  putchar('-');
		  num = -num;
	  }
	  /* print the first digits */
	  if ((num / 10) > 0)
		  print_number(num / 10);
	  /* print last digit */
	  putchar((num % 10) + 48);
}
