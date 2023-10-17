#include "main.h"

/**
 * I_handle_S_specifier - Handle the %S specifier (custom string formatting).
 * @str: The string to format.
 * Return: Number of characters printed.
 */
int I_handle_S_specifier(char *str)
{
	int count = 0;

	if (str == NULL)
		return (_puts("(null)"));

	while (*str)
	{
		if ((*str >= 1 && *str <= 31) || *str >= 127)
		{
			count += _putchar('\\');
			count += _putchar('x');
			count += _putchar((*str / 16 < 10)
					? (*str / 16 + '0') : (*str / 16 - 10 + 'A'));
			count += _putchar((*str % 16 < 10)
					? (*str % 16 + '0') : (*str % 16 - 10 + 'A'));
		}
		else
		{
			_putchar(*str);
			count++;
		}

		str++;
	}

	return (count);
}

/**
 * I_handle_s_specifier - Handle the %s specifier.
 * @str: The va_list containing the arguments.
 * Return: void
 */
int I_handle_s_specifier(char *str)
{
	if (str == NULL)
	{
		return (_puts("(null)"));
	}
	else
	{
		return (_puts(str));
	}
}

/**
 * print_integer - prints integer
 * @n: integer parameter
 * Return: 1
 */

int print_integer(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10 != 0)
	{
		int count = print_integer(n / 10);

		_putchar(n % 10 + '0');
		return (count + 1);
	}
	else
	{
		_putchar(n + '0');
		return (1);
	}
}

