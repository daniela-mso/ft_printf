#include "ft_printf.h"

static int format_specifier(va_list arguments, char format)
{
	int	count;

	count = 0;
	if (format == '%')
		count += ft_char('%');
	if (format == 'c')
		count += ft_char(va_arg(arguments, int));
	if (format == 's')
		count += ft_string(va_arg(arguments, char *));
	if (format == 'i' || format == 'd')
		count += ft_int(va_arg(arguments, int));
	if (format == 'u')
		count += ft_unsigned(va_arg(arguments, unsigned int));
	if (format == 'p')
		count += ft_adress(va_arg(arguments, uintptr_t)); // can also be an unsigned long 
	if (format == 'x' || format == 'X')
		count += ft_hexa(va_arg(arguments, unsigned int), format);
	
	return (count);
}

int ft_printf(const char *format, ...)
{
    va_list arguments; 
	int	count;
	int i;
	va_start(arguments, format);
	count = 0;
	i = 0;

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			count += format_specifier(arguments, format[i + 1]);
			i++;
		}
		else
			count += ft_char(format[i]);
		i++;
	}
	va_end(arguments);
	return (count);
}



