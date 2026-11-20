#include "ft_printf.h"






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
		if (format[i] == '%' && format[i + 1] == '%')
		{
			count += ft_putchar('%');
			i = i + 2;
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			count += ft_putstr(va_arg(arg, char *));
			i = i + 2;
		}
		else if (format[i] == '%' && format[i + 1] == 'd')
		{
			count += ft_putnbr_base(va_arg(arg, int));
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
