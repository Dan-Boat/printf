#include "main.h"

/**
 * print_hint - prints a short integer
 * @args: input string
 * @buffer: buffer pointer
 * @buf: index for buffer pointer
 * Return: number of chars printed.
 */
int print_hint(va_list args, char *buffer, unsigned int buf)
{
	short int int_input;
	unsigned short int int_in, int_temp, i, div, isneg;

	int_input = va_arg(args, int);
	isneg = 0;
	if (int_input < 0)
	{
		int_in = int_input * -1;
		buf = handle_buffer(buffer, '-', buf);
		isneg = 1;
	}
	else
	{
		int_in = int_input;
	}
	int_temp = int_in;
	div = 1;
	while (int_temp > 9)
	{
		div *= 10;
		int_temp /= 10;
	}
	for (i = 0; div > 0; div /= 10, i++)
	{
		buf = handle_buffer(buffer, ((int_in / div) % 10) + '0', buf);
	}
	return (i + isneg);
}
