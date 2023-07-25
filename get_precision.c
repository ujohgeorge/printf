#include "main.h"

/**
 * print_rev - prints in reverse
 * @params: List of arguments to be printed.
 * @ap: list of arguments.
 *
 * Return: new pointer.
 */
int print_rev(va_list ap, params_t *params)
{
	int len, sum = 0;
	char *str = va_arg(ap, char *);
	(void)params;

	if (str)
	{
		for (len = 0; *str; str++)
			len++;
		str--;
		for (; len > 0; len--, str--)
			sum += _putchar(*str);
	}
	return (sum);
}
