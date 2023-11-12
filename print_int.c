#include "main.h"

/**
 * print_int - prints integers on std output
 *
 * @num: number to be printed
 *
 * Return: number of characters printed
 */

int print_int(int num)
{

        /* declare variables */
	unsigned int count, len, prt = num, rem = num;
	int total = 0, piece = 0;

	if (num < 0)
	{
		_putchar('-');
		prt = -1 * num;
		rem = -1 * num;
	}


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