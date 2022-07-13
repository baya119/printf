#include "main.h"
/**
 * get_width - calculates width for printing
 * @format: formatted string to print the arguments
 * @i: list of arguments to be printed
 * @list: list of arguments
 * Return: Width
 */
int get_width(const char *format, int *i, va_list list)
{
	int new_i;
	int width = 0;

	for (new_i = *i + 1; format[new_i] != '\0'; new_i++)
	{
		if (is_digit(format[new_i]))
		{
			width *= 10;
			width += format[new_i] - '0';
		}
		else if (format[new_i] == '*')
		{
			new_i++;
			width = va_arg(list, int);
			break;
		}
		else
			break;
	}
	*i = new_i - 1;
	return (width);
}
