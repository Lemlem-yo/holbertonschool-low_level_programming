#include "holberton.h"
/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: String to measure.
 * Return: _strlen_recursion
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
/**
 * compare - a function that compares upsidedown a string.
 * @s: given string.
 * @l: length.
 * @b: begining of the string
 * @c:numbers of diferences
 * Return: Square root.
 */

int compare(char *s, int l, int c, int b)
{
	l = _strlen_recursion(s);
	if (l >= 0)
	{
		if (*s != 0)
		{
			if (s[b] != s[l - 1])
			{
				c++;
				b++;
				l--;
				compare(s, l, c, b);
			}
		}
	}
	return (c);
}

/**
 * is_palindrome - Returns 1 if a string is a palindrome and 0 if not.
 * @s: given string.
 * Return: Square root.
 */
int is_palindrome(char *s)
{
	if (compare(s, 0, 0, 0) == 0)
	{
		return (1);
	}
	return (0);
}
