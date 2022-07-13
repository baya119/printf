#ifndef main_h
#define main_h

#define MINUS 1
#define ZERO 4

#define LONG 2
#define SHORT 1

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * struct flags - struct containing flags to "turn on"
 * when a flag specifier is passed to _printf()
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;

/**
 * struct printHandler - struct to choose the right function depending
 * on the format specifier passed to _printf()
 * @c: format specifier
 * @f: pointer to the correct printing function
 */
typedef struct printHandler
{
	char c;
	int (*f)(va_list ap, flags_t *f);
} ph;
int print_int(va_list l, flags_t *f);
void print_number(int n);
int print_unsigned(va_list l, flags_t *f);
int count_digit(int i);
int print_hex(va_list l, flags_t *f);
int print_hex_big(va_list l, flags_t *f);
int print_binary(va_list l, flags_t *f);
int print_octal(va_list l, flags_t *f);
char *convert(unsigned long int num, int base, int lowercase);
int _printf(const char *format, ...);
int (*get_print(char s))(va_list, flags_t *);
int get_flag(char s, flags_t *f);
int print_string(va_list l, flags_t *f);
int print_char(va_list l, flags_t *f);
int _putchar(char c);
int _puts(char *str);
int print_rot13(va_list l, flags_t *f);
int print_rev(va_list l, flags_t *f);
int print_bigS(va_list l, flags_t *f);
int print_address(va_list l, flags_t *f);
int print_percent(va_list l, flags_t *f);
int get_width(const char *format, int *i, va_list list);
int is_digit(int c);
int get_precision(const char *format, int *i, va_list list);
int get_flags(const char *format, int *i);
int get_length(const char *format, int *i);
#endif
