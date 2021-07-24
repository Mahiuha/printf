#include "holberton.h"

/**
* print_digit - helper function used to print out an int
* @n: the number we want to be printed or putcharred
* 
* Description: so i did binary pretty simple but i got large binary int
*	instead of string it in an array i wanted a way to print each digit
* Return: returns the count number! so we can add it to our counter
*/

int print_digit(int n)
{
	int div;
	int count = 0;

	for (div = 1; div <= n; div *= 10)
		;
	while (n > 0)
	{
		div /= 10;
		_putchar(n / div + '0');
		n %= div;
		count++;
	}
	return (count);
}
