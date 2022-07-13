#include "main.h"
/**
* is_digit - cheks for digit
* @c: digit to be checked
* Return: 1 if c is a digit, 0 otherwise
*/
int is_digit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
