#include "holberton.h"
/**
 * print_numbers - prints numbers 0 to 9
 * Return: 0 if compilation is succesfully
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10 ; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
