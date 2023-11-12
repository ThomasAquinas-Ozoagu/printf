#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int len, len2;
	unsigned int ui;

	len2 = _printf("\nLet's try to printf a simple sentence.\n");
	len = printf("Let's try to printf a simple sentence.\n\n");
	ui = (unsigned int)INT_MAX + 1024;
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n\n", len2, len2);
	printf("### TASK 0: 'C' 'S' '%%'\n");
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n\n", "I am a string !");
	len = _printf("Percent:[%%]\n"), len2 = printf("Percent:[%%]\n");
	printf("\n### TASK 1: 'd' 'i'\n");
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n\n", -762534);
	_printf("Len:[%d]\n", len), printf("Len:[%d]\n\n", len2);
	printf("\n### TASK 2: CONVERT TO BINARY");
	_printf("\nThe binary value for\n%d is %b\n", 98, 98);
	_printf("\nThe binary value for\n%d is %b\n", 255, 255);
	printf("\n### TASK 3: 'u' 'o' 'x' 'X'\n");
	_printf("Unsigned:[%u]\n", ui),	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui), printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	return (0);
}
