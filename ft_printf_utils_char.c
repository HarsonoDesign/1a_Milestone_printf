/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_utils_char.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkalff <nkalff@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/15 17:06:52 by nkalff        #+#    #+#                 */
/*   Updated: 2026/11/15 17:46:08 by nkalff        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
	return (i);
}
