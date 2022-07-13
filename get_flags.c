#include "main.h"
/**
 * get_flags - calculate active flags
 * @format: formated string to print the arguments
 * @i: take a parameter
 * Return: flags
 */
int get_flags(const char *format, int *i)
{
	int j, new_i;
	int flags = 0;
	const char FLAG_CHAR[] = {'-', '0', '\0'};
	const int FLAG_ARRAY[] = {MINUS, ZERO, 0};

	for (new_i = *i + 1; format[new_i] != '\0'; new_i++)
	{
		for (j = 0; FLAG_CHAR[j] != '\0'; j++)
			if (format[new_i] == FLAG_CHAR[j])
			{
				flags |= FLAG_ARRAY[j];
				break;
			}
		if (FLAG_CHAR[j] == 0)
			break;
	}
	*i = new_i - 1;
	return (flags);
}
