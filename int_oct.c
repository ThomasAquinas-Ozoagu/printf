#include "main.h"
#include <stdlib.h>

/**
 * int_oct - converts integer to base 8
 *
 * @intb: the integer to be converted
 *
 * Return: the number of characters printed
 */

int int_oct(unsigned int intb)
{
	int check, prnt, nos = 0;
	char *result;
	int intbb = intb;

	result = malloc(sizeof(char) * 32);
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
