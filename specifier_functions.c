#include "main.h"

/**
  * print_char - prints a charcter to stdout.
  * @args: variadic parameters - not specifies yet.
  *
  * Return: number of characters printed.
  */

int print_char(va_list args)
{
	char c = (char)va_arg(args, int);
	int count;

	if (c)
	{
		count = _putchar(c);
		return (count);
	}
	return (0);
}

/**
  * print_string - prints a string to stdout
  * @args: variadic parameters - not specifies yet
  *
  * Return: number of characters printed.
  */

int print_string(va_list args)
{
	char *str = va_arg(args, char*);
	int i, count = 0;

	if (str == NULL)
		return (-1);
	for (i = 0; str[i]; i++)
	{
		count = _putchar(str[i]);
	}

	return (count);
}

/**
  * print_percent - prints a percent sign to stdout
  * @args: variadic parameters - not specifies yet.
  *
  * Return: number of characters printed.
  */

int print_percent(va_list args)
{
	int count;
	(void)args;

	count = _putchar('%');

	return (count);
}

/**
  * print_int - prints a integer to stdout
  * @args: variadic parameters - not specifies yet.
  *
  * Return: number of characters printed.
  */

int print_int(va_list args)
{
	int i = 0, j;
	int count = 0;
	int numb;
	int numb_array[10];
	char x[1];

	/*Fetch integer from variadic parameters*/
	numb = va_arg(args, int);

	/*Break the numbers apart and assign them to array*/
	while (numb != 0)
	{
		numb_array[i] = (numb % 10);
		numb = numb / 10;
		if (numb == 0)
			break;
		i++;
	}

	/*Write the contents of the array to stdout*/
	for (j = i; j >= 0; j--)
	{
		x[0] = ('0' + numb_array[j]); /*Convert int to char*/
		count += _putchar(x[0]);
	}

	return (count);
}

/**
  * print_decimal - prints a given integer from variadic parameters to base 10
  * @args: variadic parameters
  *
  * Return: number of characters printed.
  */

int print_decimal(va_list args)
{
	int i = 0, j;
	int count = 0;
	int numb;
	int numb_array[10];
	char x[1];

	/*Fetch integer from variadic parameters*/
	numb = va_arg(args, int);

	/*Break the numbers apart and assign them to array*/
	while (numb != 0)
	{
		numb_array[i] = (numb % 10);
		numb = numb / 10;
		if (numb == 0)
			break;
		i++;
	}

	/*Write the contents of the array to stdout*/
	for (j = i; j >= 0; j--)
	{
		x[0] = ('0' + numb_array[j]); /*Convert int to char*/
		count += _putchar(x[0]);
	}

	return (count);
}
