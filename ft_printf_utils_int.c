/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_utils_int.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkalff <nkalff@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/07 20:05:26 by nkalff        #+#    #+#                 */
/*   Updated: 2026/11/15 17:48:59 by nkalff        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(int n)
{
	long	nbr;

	nbr = (long) n;
	if (n < 0)
	{
		nbr = -n;
		ft_putchar('-');
	}
	if (n >= 10)
	{
		ft_putnbr_base(nbr / 10);
	}
	ft_putchar(nbr % 10 + '0');
}
