#include <stdio.h>
#include <unistd.h>

int	ft_putstr(char *str)
{
	int	i;

	if (!str)
	{
		return (write(1, "(null)", 6));
	}
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_specifier(char fs, va_list ptr)
{
	if (fs == 's')
	{
		return (ft_putstr(va_arg(ptr, char *)));
	}
	return (0);
}

int	ft_printf08(const char *format, ...)
{
	va_list	ptr;
	int		i;
	int		count;

	va_start (ptr, format);
	if (!format)
		return (-1);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			count = count + ft_specifier(format[i + 1], ptr);
			i = i + 2;
		}
		else
		{
			count = count + write(1, &format[i], 1);
			i++;
		}
	}
	va_end (ptr);
	return (count);
}

int	main(void)
{
	char	str08[] = "codam";

	ft_printf08("\n");
	ft_printf08("hallo %s", str08);
	ft_printf08("\n\n");

	return (0);
}
