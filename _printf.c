#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
* copy_to_buffer - Copies the given character over to the buffer
* @formatter: Character to copy over
* @buffer: Buffer being copied to
* @buflenptr: Pointer to the length of the buffer, the number of
* characters in the buffer
* @bufposptr: Pointer to the position in the buffer
*
* Return: Number of characters copied to buffer
*/
int copy_to_buffer(char formatter, char buffer[],
		     int *buflenptr, int *bufposptr)
{
	int chars;

	chars = 0;
	buffer[*bufposptr] = formatter;
	*bufposptr += 1;
	*buflenptr += 1;
	if (*buflenptr == 1024)
	{
		write_buffer(buffer, buflenptr, bufposptr);
	}
	chars++;
	return (chars);
}


/**
* check_conversion - Checks formatter character to see if
* it's a conversion specifier
* @formatter: The format character being checked
* @conversions: Struct holding conversion specifiers & function pointers to
* @appropriate functions for corresponding conversion specifier
* @buffer: Buffer needed to copy to when calling function
* @buflenptr: Pointer to the length of the buffer
* @bufposptr: Pointer to the position within the buffer
* @print_this: va_list holding all given arguments to _printf function
*
* Return: Return the number of characters copied to buffer if a
* function is called, 0 if no function is called
*/
int check_conversion(char formatter, char_funcs_t conversions[], char buffer[],
		     int *buflenptr, int *bufposptr, va_list print_this)
{
	int j, chars;

	chars = 0;
	for (j = 0; j < 13; j++)
	{
		if (formatter == *conversions[j].c)
		{
			chars += conversions[j].f(print_this, buffer, buflenptr,
						  bufposptr);
			return (chars);
		}
	}
	return (0);
}
/**
* formatPrinter - finds the formatters function and prints its arguement
* @format: The format character being checked
* @conversions: Struct holding conversion specifiers & function pointers to
* appropriate functions for corresponding conversion specifier
* @buffer: Buffer needed to copy to when calling function
* @buflenptr: Pointer to the length of the buffer
* @bufposptr: Pointer to the position within the buffer
* @print_this: va_list holding all given arguments to _printf function
*
* Return: Return the number of characters copied to buffer if a
* function is called, 0 if no function is called
*/
int formatPrinter(const char *format, va_list print_this, char buffer[],
		  int *buflenptr, int *bufposptr, char_funcs_t conversions[])
{
	int i, chars, print;

	chars = 0;
	for (i = 0; format[i] != '\0' && format != NULL; i++)
	{
		if (format[i] == '%')
		{
			i++;
			print = check_conversion(format[i], conversions,
						 buffer, buflenptr, bufposptr,
						 print_this);
			if (print == 0)
				chars += copy_to_buffer(format[i], buffer,
							buflenptr, bufposptr);
			chars += print;
		}
		else
		{
			chars += copy_to_buffer(format[i], buffer, buflenptr,
						bufposptr);
		}
	}
	return (chars);
}

/**
* _printf - Print out a formatted string
* @format: Format of the string
* Return: Number of characters printed
*/
int _printf(const char *format, ...)
{
	va_list print_this;
	char buffer[1024];
	int chars, buflen, bufpos, *buflenptr, *bufposptr;
	char_funcs_t conversions[] = {{"c", print_c},
				      {"s", print_s},
				      {"i", print_int},
				      {"d", print_int},
				      {"u", print_u},
				      {"o", print_o},
				      {"x", print_hex},
				      {"X", print_heX},
				      {"b", print_b},
				      {"S", print_S},
				      {"r", print_r},
				      {"R", print_R},
				      {"p", print_p},
	};

	initialize_buffer(buffer);
	chars = bufpos = 0;
	buflen = 1;
	buflenptr = &buflen;
	bufposptr = &bufpos;
	va_start(print_this, format);
	if (format == NULL || print_this == NULL)
		return (chars);
	chars = formatPrinter(format, print_this, buffer,
			      buflenptr, bufposptr, conversions);
	write_buffer(buffer, buflenptr, bufposptr);
	va_end(print_this);
	return (chars);
}
