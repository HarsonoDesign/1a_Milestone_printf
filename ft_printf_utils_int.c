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

// int	ft_intlen(int nbr)
// {
// 	int	len;

// 	len = 0;
// 	if (nbr <= 0)
// 	{
// 		len = 1;
// 	}
// 	while (nbr != 0)
// 	{
// 		nbr = nbr / 10;
// 		len++;
// 	}
// 	return (len);
// }

int	ft_putnbr_base(int n)
{
	long	nbr;
	int		count;

	count = 0;
	nbr = (long) n;
	if (nbr < 0)
	{
		nbr = -nbr;
		ft_putchar('-');
		count++;
	}
	if (nbr >= 10)
	{
		count = count + ft_putnbr_base(nbr / 10);
	}
	ft_putchar(nbr % 10 + '0');
	count++;
	return (count);
}
