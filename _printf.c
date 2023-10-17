#include "main.h"

/**
 * _printf - our magical custom printf function,
 *  handles (d, i, b, r, R) specifiers
 * @format: the inserted format
 * Return: count
 */

int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			switch (*(++format))
			{
				case 'd':
				case 'i':
					count += I_handle_d_specifier(va_arg(args, int));
					break;
				case 'b':
					count += I_handle_b_specifier(va_arg(args, int));
					break;
				case 'R':
					count += I_handle_R_specifier(va_arg(args, char *));
					break;
				case 'r':
					count += I_handle_r_specifier(va_arg(args, char *));
					break;
				default:
					count += I_handle_chars_specifiers(args, format);
					break;
			}
		}
		else
		{
			count += _putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (count);
}

/**
 * I_handle_chars_specifiers - handles (c, s, %, S) specifers
 * @args: agrs
 * @format: the inserted format
 * Return: count
 */
int I_handle_chars_specifiers(va_list args, const char *format)
{
	int count = 0;

	switch (*format)
	{
		case 'c':
			count += _putchar(va_arg(args, int));
			break;
		case 's':
			count += I_handle_s_specifier(va_arg(args, char *));
			break;
		case '%':
			count += _putchar(*format);
			break;
		case 'S':
			count += I_handle_S_specifier(va_arg(args, char *));
			break;
		default:
			count += I_handle_numbers_specifiers(args, format);
			break;
	}
	return (count);
}

/**
 * I_handle_numbers_specifiers - handles (u, o, x, X) specifiers
 * @args: agrs
 * @format: the inserted format
 * Return: count
 */
int I_handle_numbers_specifiers(va_list args, const char *format)
{
	int count = 0;

	switch (*format)
	{
		case 'u':
			count += handler_u_specifier(va_arg(args, unsigned int));
			break;
		case 'o':
			count += handler_o_specifier(va_arg(args, unsigned int));
			break;
		case 'x':
			count += handler_x_specifier(va_arg(args, unsigned int));
			break;
		case 'X':
			count += handler_X_specifier(va_arg(args, unsigned int));
			break;
		default:
		count += I_handle_pointer(args, format);
			break;
	}

	return (count);
}
/**
 * I_handle_pointer - handle (p) specifier
 * @args: agrs
 * @format: the inserted format
 * Return: count
 */
int I_handle_pointer(va_list args, const char *format)
{
	int count = 0;

	switch (*format)
	{
				case 'p':
			count += handler_p_specifier(va_arg(args, void *));
			break;

		default:
			count += _putchar('%');
			if (*format)
				count += _putchar(*format);
			break;
	}

	return (count);
}
