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
		count = write(1, &c, 1);
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
	int length = 0, i, count = 0;

	if (str == NULL)
		return (-1);
	for (i = 0; str[i]; i++)
	{
		count = write(1, &str[i], 1);
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
	(void)args;
	int count;

	count = write(1, "%", 1);

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
	int i = 0;
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
	for (i; i >= 0; i--)
	{
		x[0] = ('0' + numb_array[i]); /*Convert int to char*/
		count += write(1, x, 1);
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
	int i = 0;
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
	for (i; i >= 0; i--)
	{
		x[0] = ('0' + numb_array[i]); /*Convert int to char*/
		count += write(1, x, 1);
	}

	return (count);
}
