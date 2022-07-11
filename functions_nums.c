#include "main.h"

/**
 * print_i - Prints an integer.
 * @i: The integer to print.
 *
 * Return: Chars and digits printed in to stdout.
 */
int print_i(va_list i)
{
	int a[10];
	int j, m, n, sum, count;

	n = va_arg(i, int);
	count = 0;
	m = 1000000000;

	if (n < 0)
	{
		_putchar('-');
		count++;
		n = -n;
	}

	a[0] = n / m;

	for (j = 1; j < 10; j++)
	{
		m /= 10;
		a[j] = (n / m) % 10;
	}

	for (j = 0, sum = 0; j < 10; j++)
	{
		sum += a[j];

		if (sum != 0 || j == 9)
		{
			_putchar('0' + a[j]);
			count++;
		}
	}
	return (count);
}

/**
 * print_d - Prints the integer of a decimal.
 * @d: Decimal to print.
 *
 * Return: Chars and digits printed in to the stdout.
 */
int print_d(va_list d)
{
	int a[10];
	int j, m, n, sum, count;

	n = va_arg(d, int);
	count = 0;
	m = 1000000000;

	if (n < 0)
	{
		_putchar('-');
		count++;
		n = -n;
	}

	a[0] = n / m;

	for (j = 1; j < 10; j++)
	{
		m /= 10;
		a[j] = (n / m) % 10;
	}

	for (j = 0, sum = 0; j < 10; j++)
	{
		sum += a[j];

		if (sum != 0 || j == 9)
		{
			_putchar('0' + a[j]);
			count++;
		}
	}
	return (count);
}