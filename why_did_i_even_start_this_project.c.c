#include "main.h"

/**
 * I_handle_b_specifier - handle the %b specifier to get binary.
 * @n: integer
 * Return: count + binary representation
 */
int I_handle_b_specifier(int n)
{
	int count = 0;
	int leadingZero = 1;
	int i;

	for (i = 31; i >= 0; i--)
	{
		char bit = (n >> i) & 1;

		if (bit == 1)
		{
			leadingZero = 0;
		}

		if (!leadingZero)
		{
			count += _putchar(bit + '0');
		}
	}

	if (count == 0)
	{
		count += _putchar('0');
	}

	return (count);
}


/**
 * I_handle_d_specifier - handle the %d specifier.
 * @n: integer
 * Return: count + _putchar(n % 10 + '0')
 */
int I_handle_d_specifier(int n)
{
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		count++;
		n = -n;
	}

	count += print_integer(n);

	return (count);
}

/**
 * I_handle_i_specifier - handle the %i specifier.
 * @n: integer
 * Return: count + _putchar(n % 10 + '0')
 */
int I_handle_i_specifier(int n)
{
	int count = print_integer(n);

	return (count);
}
/**
 * I_handle_R_specifier - Handle the %R specifier (ROT13).
 * @str: The string to ROT13 encode and print.
 * Return: Number of characters printed.
 */
int I_handle_R_specifier(char *str)
{
	int count = 0;

	if (str == NULL)
		return (_puts("(null)"));

	while (*str)
	{
		char c = *str;
		char rot13 = c;

		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		{
			char base = (c >= 'a') ? 'a' : 'A';

			rot13 = (c - base + 13) % 26 + base;
		}

		_putchar(rot13);
		count++;
		str++;
	}

	return (count);
}

/**
 * I_handle_r_specifier - Handle the %r specifier (reversed string).
 * @str: The string to reverse and print.
 * Return: Number of characters printed.
 */
int I_handle_r_specifier(char *str)
{
	int count = 0;
	int len = 0;
	int i;

	if (str == NULL)
		return (_puts("(null)"));

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(str[i]);
		count++;
	}

	return (count);
}
