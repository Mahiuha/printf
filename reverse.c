#include "holberton.h"

/**
* rev_str - reverse string
* @s: string to reverse
* Return: count of characers printed
*/
int  rev_str(char *s)
{
/* initialize a index counter */
	int i, j = 0;

	while (s[j])
		j++;
/* start i at length of string, decrement till 0 */
	for (i = j - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	return (j);
}
