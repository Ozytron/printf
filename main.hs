#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
  * struct spec - struct for specifier to pointer to specifier function.
  * @spec_id: character to compare.
  * @spec_func: function to handle printing od specified character type'
  */

typedef struct spec
{
	char *spec_id;
	int (*spec_func)(va_list);
} spec_t;

int _printf(const char *format, ...);
int (*check_specifier(const char *))(va_list);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_int(va_list args);
int print_decimal(va_list args);

#endif /* MAIN_H */