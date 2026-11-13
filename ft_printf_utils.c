/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_utils.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkalff <nkalff@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/07 20:05:26 by nkalff        #+#    #+#                 */
/*   Updated: 2026/11/13 14:49:49 by nkalff        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	if (!str)
	{
		return ;
	}
	write(1, str, ft_strlen(str));
}
