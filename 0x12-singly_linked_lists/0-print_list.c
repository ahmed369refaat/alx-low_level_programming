#include <stdarg.h>
#include <stdio.h>
#include "holberton.h"

/**
 * _printf - prints output according to a format
 * @format: character string containing format specifiers
 *
 * Return: number of characters printed (excluding null byte used to end output
 * to strings), or -1 if an error occurs
 */
int _printf(const char *format, ...)
{
	va_list args;
	int printed_chars = 0;
	char *s;

	va_start(args, format);

	if (format == NULL)
		return (-1);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;

			switch (*format)
			{
			case 'c':
				printed_chars += _putchar(va_arg(args, int));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(null)";
				printed_chars += _puts(s);
				break;
			case '%':
				printed_chars += _putchar('%');
				break;
			default:
				printed_chars += _putchar('%');
				printed_chars += _putchar(*format);
				break;
			}
		}
		else
		{
			printed_chars += _putchar(*format);
		}

		format++;
	}

	va_end(args);

	return (printed_chars);
}
