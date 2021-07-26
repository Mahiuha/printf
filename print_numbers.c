#include "holberton.h"
/**
 * print_numbers - prints integer
 * @output_p: Host output
 * @o_p: output position
 * @n: int
 *
 * Description: Function that print a char
 * Return: int
 */
int print_numbers(int n, char *output_p, int o_p)
{
	int x = 1, y = 0, z;

	if (n < 0)
	{
		output_p[o_p] = '-';
		o_p++;
	}
	while (n / x > 9 || n / x < -9)
	{
		x = x * 10;
		y++;
	}
	for (z = 0; z <= y; z++)
	{
		if (n < 0)
		{
			output_p[o_p] = (-(n / x) + '0');
		}
		else
		{
			output_p[o_p] = ((n / x) + '0');
		}
		o_p++;
		n = n % x;
		x = x / 10;
	}
	return (o_p);
}
/**
 * print_int - prints specifier d
 * @vlist: arguments passed to print
 * @output_p: Host output
 * @o_p: output position
 *
 * Return: int
 */
int print_int(va_list vlist, char *output_p, int o_p)
{
	return (print_numbers(va_arg(vlist, int), output_p, o_p));
}
/**
 * print_single_int - print specifier i
 * @vlist: arguments passed to print
 * @output_p: Host output
 * @o_p: output position
 *
 * Return: int
 */
int print_single_int(va_list vlist, char *output_p, int o_p)
{
	return (print_numbers(va_arg(vlist, int), output_p, o_p));
}
