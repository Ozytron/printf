#include "main.h"

/**
  * check_specifier - checks if a character is a valid specifier
  *                  and assigns the appropriate function to print.
  * @format: the specifier (char *)
  *
  * Return: pointer to function.
  */
int (*check_specifier(const char *format))(va_list)
{
	int i;
	spec_t spec_array[6] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"i", print_int},
		{"d", print_decimal},
		{NULL, NULL}};

	for (i = 0; spec_array[i].spec_id != NULL; i++)
	{
		if (*(spec_array[i].spec_id) == *format)
		{
			return (spec_array[i].spec_func);
		}
	}
	return (NULL);
}
