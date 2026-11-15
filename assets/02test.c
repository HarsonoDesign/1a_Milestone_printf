#include "ft_printf.h"
#include <stdio.h>

int	test2_printf(const char *format, ...)
{
	va_list	arg;
	int		i;
	int		count;

	va_start(arg, format);

	i = 0;
	count = 0;
	while (format[i] != '\0' && format[i + 1] != '\0')
	{
		//printf("i: %i --- char: %c\n", i, format[i]);
		// if (format[i] == '%' && format[i + 1] == '%')
		// {
		// 	ft_putchar(format[i]);
		// 	i = i + 2;
		// }
		if (format[i] == '%' && format[i + 1] == 's')
		{
			count += ft_putstr(va_arg(arg, char *));
			i = i + count;
		}
		else
		{
			ft_putchar(format[i]);
		}
		i++;
	}
	va_end(arg);
	return (i);
}

int	main(void)
{
	char	str2[] = "codam";

	test2_printf("hello %s", str2);
	test2_printf("\n");

	printf("hello %s", str2);
	printf("\n");

	return (0);
}
