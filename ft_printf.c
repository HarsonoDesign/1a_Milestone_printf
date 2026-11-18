/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkalff <nkalff@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/07 20:04:36 by nkalff        #+#    #+#                 */
/*   Updated: 2026/11/17 18:39:25 by nkalff        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_specifier(char fs, va_list vaptr)
{
	if (fs == '%')
		return (ft_putchar('%'));
	else if (fs == 'c')
		return (ft_putchar(va_arg(vaptr, int)));
	else if (fs == 's')
		return (ft_putstring(va_arg(vaptr, char *)));
	else if (fs == 'p')
		return (ft_putpointr((uintptr_t)va_arg(vaptr, void *)));
	else if (fs == 'd' || fs == 'i')
		return (ft_putnbr_base(va_arg(vaptr, int), BASE_DEC));
	else if (fs == 'u')
		return (ft_putnbr_base(va_arg(vaptr, unsigned int), BASE_DEC));
	else if (fs == 'x')
		return (ft_putnbr_base(va_arg(vaptr, unsigned int), BASE_HEX_LOW));
	else if (fs == 'X')
		return (ft_putnbr_base(va_arg(vaptr, unsigned int), BASE_HEX_UP));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	vaptr;
	int		i;
	int		count;

	if (!format)
		return (-1);
	va_start(vaptr, format);
	i = 0;
	count = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			count += ft_specifier(format[i + 1], vaptr);
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
