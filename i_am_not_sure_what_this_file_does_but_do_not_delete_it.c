#include "main.h"

/**
 * handler_u_specifier - Handle the %u specifier (unsigned decimal).
 * @n: unsigned integer
 * Return: count of characters printed
 */
int handler_u_specifier(unsigned int n)
{
	int count = 0;
	int remainder;

	if (n / 10 != 0)
	{
		count += handler_u_specifier(n / 10);
	}

	remainder = n % 10;

	return (count + _putchar(remainder + '0'));
}

/**
 * handler_o_specifier - Handle the %o specifier (octal).
 * @n: unsigned integer
 * Return: count of characters printed
 */
int handler_o_specifier(unsigned int n)
{
	int count = 0;
	int remainder;

	if (n / 8 != 0)
	{
		count += handler_o_specifier(n / 8);
	}

	remainder = n % 8;

	return (count + _putchar(remainder + '0'));
}

/**
 * handler_x_specifier - Handle the %x specifier (hexadecimal, lowercase).
 * @n: unsigned integer
 * Return: count of characters printed
 */
int handler_x_specifier(unsigned int n)
{
	int count = 0;
	int remainder;

	if (n / 16 != 0)
	{
		count += handler_x_specifier(n / 16);
	}

	remainder = n % 16;

	return (count + _putchar((remainder < 10) ?
				(remainder + '0') : (remainder - 10 + 'a')));
}


/**
 * handler_X_specifier - Handle the %X specifier (hexadecimal, uppercase).
 * @n: unsigned integer
 * Return: count of characters printed
 */
int handler_X_specifier(unsigned int n)
{
	int count = 0;
	int remainder;

	if (n / 16 != 0)
	{
		count += handler_X_specifier(n / 16);
	}

	remainder = n % 16;

	return (count + _putchar((remainder < 10) ?
				(remainder + '0') : (remainder - 10 + 'A')));
}

/**
 * handler_p_specifier - Handle the %p pointer specifier
 * @p: pointer
 * Return: count
 */

int handler_p_specifier(void *p)
{
	char buffer[64];
	int count = 0;
	int i;

	sprintf(buffer, "%p", p);

	for (i = 0; buffer[i] != '\0'; i++)
	{
		count += _putchar(buffer[i]);
	}

	return (count);
}
