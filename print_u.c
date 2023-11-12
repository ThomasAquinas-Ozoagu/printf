#include "main.h"


/**
 * _pow - finds n to the power of m
 * @n: the number
 * @m: the power
 * Return: the result
 */
int _pow(int n, int m)
{
	int x, suma = 1;

	for(x = m - 1; x > 0; x--)
	{
		suma = suma * n;
	}
	return (suma);
}



/**
 * print_u - prints unsigned integers on std output
 *
 * @num: number to be printed
 *
 * Return: number of characters printed
 */

int print_u(unsigned int num)
{
	/* declare variables */
	unsigned int count, len, prt = num, rem = num;
	int total = 0, piece = 0;

	/*establish number of digits*/
	for (count = 0; rem > 0; count++)
	{
		rem /= 10;
	}


	for (len = count; len > 0; len--)
	{
		piece = _pow(10, len);
		_putchar(prt/piece + '0');
		prt = prt % piece;
		total++;
	}

	return (total);
}
