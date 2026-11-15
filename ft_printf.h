/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkalff <nkalff@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/07 20:05:31 by nkalff        #+#    #+#                 */
/*   Updated: 2026/11/15 17:50:14 by nkalff        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>

// -------------------------------------------------- print char to char
int		ft_putchar(char c);
int		ft_putstr(char *str);
// -------------------------------------------------- print int to char
int		ft_putnbr_base(int n);

#endif
