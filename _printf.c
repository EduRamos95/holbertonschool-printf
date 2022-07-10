#include "main.h"
/**
 * Control_Spec - choose one option by specifier
 * @format: possible format specifier
 *
 * Return: pointer to valid function or NULL
 */
static int (*Control_Spec(const char *format))(va_list)
{
	unsigned int i;
	Specifier_t Spec[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_mod},
		{NULL, NULL}
	};

	for (i = 0; Spec[i].op != NULL; i++)
	{
		if (*(Spec[i].op) == *format)
		{
			break;
		}
	}
	return (Spec[i].f);
}

/**
 * _printf - Build out the printf function
 * @format: string passed with possible format specifiers
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	unsigned int i, count;
	va_list var_parameter;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);
	va_start(var_parameter, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		for (; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			count++;
		}
		if (!format[i])
			return (count);
		f = Control_Spec(&format[i + 1]);/*pos[%]*/
		if (f != NULL) /*don't match skip if*/
		{
			count += f(var_parameter);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		count++;
		i++;
	}
	va_end(var_parameter);
	return (count);
}
