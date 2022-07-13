#include "main.h"
/**
 * get_length - calculates length to cast the argument
 * @format: formatted string to print the arguments
 * @i: list of arguments to be printed
 * Return: length
 */
int get_length(const char *format, int *i)
{
	int new_i = *i + 1;
	int length = 0;

	if (format[new_i] == 'l')
		length = LONG;
	else if (format[new_i] == 'h')
		length = SHORT;
	if (length == 0)
		*i = new_i - 1;
	else
		*i = new_i;
	return (length);
}
