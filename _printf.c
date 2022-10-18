#include "main.h"
/**
* _printf - function that replicate the stdio.h printf function
* @format: the string input for printf
* Return: string output and the number of string inputs
*/
int _printf(const char *format, ...)
{
	unsigned int i = 0, len = 0, buf = 0; /* Initialize the printf arguments*/
	va_list args;
	int (*func)(va_list, char *, unsigned int);
	char *buffer;

	va_start(args, format), buffer = malloc(sizeof(char) * 1024);
	if (!format || !buffer || (format[i] == '%' && !format[i + 1]))
		return (-1);
	if (!format[i])
		return (0);
	for (i = 0; format && format[i]; i++) /*traverse through the string*/
	{
		if (format[i] == '%')
		{
			if (format[i] == '\0')
			{
				print_buffer(buffer, buf), free(buffer), va_end(args);
				return (-1);
			}
			else
			{ func = get_func(format, i + 1);
				if (func == NULL)
				{
					if (format[i + 1] == ' ' && !format[i + 2])
						return (-1);
					handle_buffer(buffer, format[i], buf), len++, i--;
				}
				else
				{
					len += func(args, buffer, buf);
					i += print_func(format, i + 1);
				}
			} i++;
		}
		else
			handle_buffer(buffer, format[i], buf), len++;
		for (buf = len; buf > 1024; buf -= 1024)
			;
	} print_buffer(buffer, buf), free(buffer), va_end(args);
	return (len);
}
