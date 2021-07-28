#include "holberton.h"
/**
 * print_string_rev - print a sting reversed.
 * @va: arguments.
 * Return: lenght of string.
 */
int print_string_rev(va_list va)
{
	char *s;
	char nu[] = "(null)";
	int i, lenght;

	s = va_arg(va, char *);

	if (s == NULL)
	{
		for (i = 0; nu[i] != '\0'; i++)
			_putchar(nu[i]);
		return (6);
	}
	lenght = _strlen(s);
	for (i = (lenght - 1); i >= 0; i--)
		_putchar(s[i]);
	return (lenght);
}
