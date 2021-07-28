#include "holberton.h"

/**
* no_struct - a helper function that is called when there is a %something
* @c: the character passed that was after %
* @count: the number of count thus far. it will be incremented
* @argu: the va_list that is passed to us so we can va_arg it
*
* Description: NO I WILL NOT USE STRUCTS LIKE EVERYONE ELSE
* Return: the count total
*
* A: we passed that character after the %. use it as switch condition
* B: if it is a char, we put char and plus 1 count
* C: if it is a string we check if null, if so then we put null and plus 6
*	we also put string if not null and count the stuff
* D: if it is an i, do the same as a d. so we put i and let it cascade down
*	if the number is 0 then we add 1 to count and put a 0
*	else we just print the number
* E: if it was a % then we just plus 1 and put the %
* F: Binary. havent got it to work yet. it should.
* G: if it is r, call rev_str function to print string in reverse.
* H: the default is to just print the %letter and yea...
*/

int no_struct(char c, int count, va_list argu)
{
	int j;
	char *s;

	switch (c)/* A */
	{
		case 'c':/* B */
			j = va_arg(argu, int);
			count += _putchar(j);
			break;
		case 's':/* C */
			s = va_arg(argu, char *);
			if (!s)
			{
				_putchar('(');
				_putchar('n');
				_putchar('u');
				_putchar('l');
				_putchar('l');
				_putchar(')');
				count += 6;
			}
			else
				count += _putstring(s);
			break;
		case 'i':/* D */
		case 'd':
			j = va_arg(argu, int);
			if (!j)
			{
				count++;
				_putchar('0');
			}
			else
				count += print_number(j);
			break;
		case '%':/* E */
			count += _putchar('%');
			break;
		case 'b':/* F */
			j = va_arg(argu, int);
			count += dec_to_binary(j);
			break;
		case 'r': /* G */
			s = va_arg(argu, char *);
			count += rev_str(s);
			break;
		case 'R': /* H */
			s = va_arg(argu, char *);
			count += rot13(s);
			break;
		default:/* H */
			count += 2;
			_putchar('%');
			_putchar(c);
	}
	return (count);
}

/**
* _printf - our own printf function
* @format: A character string, composed of zero of more directives
*
* Description: Writes a formatted string to the standard output
* Return: an integer. The number of characters printed excluding the null byte
* A: if format is null then we return -1
* B: as long as format of index is not null, we increment
* C: if the index is not a percentage then we puts and count++
* D: ERASED THE DEEEE
* E: if it is not a null then we scan that letter. pass it into helper func
* F: its prob a null so we return -1
*/

int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	va_list argu;

	va_start(argu, format);

	if (!format)/* A */
		return (-1);

	for (i = 0; format[i]; i++)/* B */
	{
		if (format[i] != '%')/* C */
		{
			count++;
			_putchar(format[i]);
		}
		else if (format[i + 1])/* E */
		{
			i++;
			count = no_struct(format[i], count, argu);
		}
		else/* F */
			return (-1);
	}
	va_end(argu);
	return (count);
}
