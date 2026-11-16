/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkalff <nkalff@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/07 20:04:36 by nkalff        #+#    #+#                 */
/*   Updated: 2026/11/16 17:21:22 by nkalff        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_specifier(char fs, va_list arg)
{
	if (fs == 'c')
		return (ft_putchar(va_arg(arg, int)));
	else if (fs == 's')
		return (ft_putstr(va_arg(arg, char *)));
	else if (fs == 'p')
		return (ft_putnbr_uns(va_arg(arg, void *), BASE_HEX_LOW));
	else if (fs == 'd' || fs == 'i')
		return (ft_putnbr_sign(va_arg(arg, int), BASE_DEC));
	else if (fs == 'u')
		return (ft_putnbr_uns(va_arg(arg, unsigned int), BASE_DEC));
	else if (fs == 'x')
		return (ft_putnbr_uns(va_arg(arg, unsigned int), BASE_HEX_LOW));
	else if (fs == 'X')
		return (ft_putnbr_uns(va_arg(arg, unsigned int), BASE_HEX_UP));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		i;
	int		count;

	if (!format)
	{
		return (-1);
	}
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
