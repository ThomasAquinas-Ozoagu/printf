#include "main.h"
#include <stdlib.h>

/**
 * print_xx - converts integer to base 16 in capital
 *
 * @intb: the integer to be converted
 *
 * Return: the number of characters printed
 */

int print_xx(unsigned int intb)
{
	int check, prnt, nos = 0;
	unsigned int *result;
	unsigned int intbb = intb;


	result = malloc(sizeof(int) * 32);
	if (result == NULL)
		return (-1);
	for (check = 0; intbb > 0; check++)
	{

		result[check] = intbb % 16;
		intbb = intbb / 16;

	}
	for (prnt = check - 1; prnt >= 0; prnt--)
	{
		if (result[prnt] < 10)
			_putchar('0' + result[prnt]);
		if (result[prnt] >= 10)
		{
			_putchar('A' + (result[prnt] - 10));
		}
		nos++;
	}
	free(result);
	return (nos);
}
