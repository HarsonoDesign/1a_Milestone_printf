/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_utils_int.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkalff <nkalff@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/07 20:05:26 by nkalff        #+#    #+#                 */
/*   Updated: 2026/11/16 13:51:00 by nkalff        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(const char *str)
{
	int	count;

	if (!str)
	{
		return (write(1, "(null)", 6));
	}
	count = 0;
	while (str[count] != '\0')
	{
		write(1, &str[count], 1);
		count++;
	}
	return (count);
}

long long	ft_baselen(const char *base)
{
	long long	i;

	i = 0;
	while (base[i])
	{
		i++;
	}
	return (i);
}

int	ft_putnbr_base(long long nbr, const char *base)
{
	int			count;
	long long	baselen;

	count = 0;
	if (nbr < 0)
	{
		count += ft_putchar('-');
		nbr = -nbr;
	}
	baselen = ft_baselen(base);
	if (nbr >= baselen)
	{
		count += ft_putnbr_base((nbr / baselen), base);
	}
	count += ft_putchar(base[nbr % baselen]);
	return (count);
}

int	ft_putptr(unsigned long address)
{
	int	count;

	if (!address)
	{
		return (ft_putstr("(nil)"));
	}
	count = 0;
	if (address >= 16)
	{
		count += ft_putptr(address / 16);
	}
	else
	{
		count += ft_putstr("0x");
	}
	count += ft_putchar(BASE_HEX_LOW[address % 16]);
	return (count);
}
