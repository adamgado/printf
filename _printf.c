#include "main.h"
/**
 * _printf - Printf function
 * @format: format.
 * Return: number of printed chars.
 */
int _printf(const char *format, ...)
{
	int i, printed = 0, printed_chars = 0;
	va_list args;

	va_start(args, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			_putchar(va_arg(args, int));
		}
		else if (format[i + 1] == 's')
		{
			printed_str = _putstr(va_arg(args, char *));
			i++;
			printed_chars += (printed_str - 1);
		}
		else if (format[i + 1] == '%')
		{
			_putchar('%')
		}
		else if (format[i + 1] == 'd' || format[i + 1] == 'i')
		{
			printed_int = _putint(va_arg(args, int *));
			printed_chars += printed_int;
		}

		printed_chars++;
	}
	va_end(args);

	return (printed_chars);
}
