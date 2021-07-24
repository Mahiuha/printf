#include "holberton.h"

/**
* _putstring - prints a string
* @s: the pointer passed to this
* 
* Description: puts the string and returns the length.
* Return: the string length
*/

int _putstring(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
		i++;
	}
	return (i);
}
