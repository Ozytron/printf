#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
  * main - test file
  * Return: Always 0.
  */

int main(void)
{
	int count_std = 0;
	int count_hmd = 0;

	write(1,"STANDARD:\n",10);
	count_std = printf("My name starts with: %c\n", 'F');
	printf("I printed %d characters\n", count_std);
	printf("I printed %%\n");
	printf("I printed %s\n", "Ozytron");
	printf("I printed %d\n", 380);
	printf("I printed %i\n", 380);

	write(1,"________________________\n",25);

	write(1,"HOME_MADE:\n",11);
	count_hmd = _printf("My name starts with: %c\n", 'F');
	printf("I printed %d characters\n", count_hmd);
	_printf("I printed %%\n");
	_printf("I printed %s\n", "Ozytron");
	_printf("I printed %d\n", 380);
	_printf("I printed %i\n", 380);

	return (0);
}