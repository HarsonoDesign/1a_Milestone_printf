#include <stdio.h>
#include <unistd.h>

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstring(char *str)
{
	int	count;

	if (!str)
	{
		return (write(1, "(null)", 6));
	}
	count = 0;
	while (str[count])
	{
		write(1, &str[count], 1);
		count++;
	}
	return (count);
}

int	ft_printf09(char *format, ...)
{
	va_list	vaptr;
	int		i;
	int		count;

	if (!format)
		return (-1);
	va_start (vaptr, format);
	i = 0;
	count = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] == 's')
		{
			count += ft_putstring(va_arg(vaptr, char *));
			i = i + 2;
		}
		else if (format [i] == '%' && format [i + 1] == 'c')
		{
			count += ft_putchar(va_arg(vaptr, int));
			i = i + 2;
		}
		else
		{
			count += ft_putchar(format[i]);
			i++;
		}
	}
	va_end(vaptr);
	return (count);
}

int	main(void)
{
	char	str09[] = "codam";

	ft_printf09("\n");
	ft_printf09("hallo %s", str09);
	ft_printf09("\n");
}
