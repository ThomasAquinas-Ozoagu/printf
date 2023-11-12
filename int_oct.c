#include "main.h"
#include <stdlib.h>

/**
 * print_o - converts integer to base 8
 *
 * @intb: the integer to be converted
 *
 * Return: the number of characters printed
 */

int print_o(unsigned int intb)
{
	int check, prnt, nos = 0;
	unsigned int *result;
	unsigned int intbb = intb;


	result = malloc(sizeof(int) * 32);
	if (result == NULL)
		return (-1);
	for (check = 0; intbb > 0; check++)
	{

		result[check] = intbb % 8;
		intbb = intbb / 8;

	}
	for (prnt = check - 1; prnt >= 0; prnt--)
	{

		_putchar('0' + result[prnt]);
		nos++;
	}
	free(result);
	return (nos);
}
