#include "holberton.h"

/**
* _strlen - a string length function
* @s: the string pointer passed to us
* 
* Description: we want the length minus the null term
* Return: the count number
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

