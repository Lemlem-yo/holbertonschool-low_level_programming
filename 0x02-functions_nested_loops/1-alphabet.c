#include "holberton.h"
/**
* print_alphabet - prints the alphabet in lowercase
* Return: 0 if compilation is succesfully
*/
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
