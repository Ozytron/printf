#include <stdarg.h>
#include "main.h"
#include <unistd.h>

/**
  * _printf - prints formatted string.
  * @format: string to print (char *)
  * @...: variadic parameter - Not known yet
  *
  * Return: the number of characters printed
  *         (excluding the null byte used to end output to strings)
  */
int _printf(const char *format, ...)
{
	int char_index = 0, char_count = 0;
	int wrv = 0; /* return value from write()*/
	va_list args;
	int (*spec_func)(va_list);

	va_start(args, format);

	if (format == NULL)/* prevents parsing a null pointer */
		return (-1);
	while (format[char_index])/* print each character of string and count them */
	{
		if (format[char_index] != '%')
		{
			wrv = write(1, &format[char_index], 1);
			char_count += wrv;
			char_index++;
			continue;
		}
		if (format[char_index] == '%')
		{
			spec_func = check_specifier(&format[char_index + 1]);
			if (spec_func != NULL)
			{
				wrv = spec_func(args);
				char_count += wrv;
				char_index += 2;
				continue;
			}
			if (format[char_index + 1] == '\0')
				break;
			if (format[char_index + 1] != '\0')
			{
				wrv = write(1, &format[char_index], 1);
				char_count += wrv;
				char_index += 2;
				continue;
			}
		}
	}
	return (char_count);
}
