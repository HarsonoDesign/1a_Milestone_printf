#include "ft_printf.h"

int	ft_specifier(char fs, va_list arg)
{
	if (fs == 'c')
	{
		return (ft_putchar(va_arg(arg, char)));
	}
	if (fs == 's')
	{
		return (ft_putstr(va_arg(arg, char *)));
	}
	if (fs == 'd')
	{
		return (ft_putnbr(va_arg(arg, int)));
	}
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		i;
	int		count;

	va_start(arg, format);

	i = 0;
	count = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			count += ft_specifier(format[i + 1], arg);
			i = i + 2;
		}
		else
		{
			count += ft_putchar(format[i]);
			i++;
		}
	}
	va_end(arg);
	return (count);
}
