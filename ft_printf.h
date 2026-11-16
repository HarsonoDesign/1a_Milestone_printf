/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkalff <nkalff@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/07 20:05:31 by nkalff        #+#    #+#                 */
/*   Updated: 2026/11/16 16:15:12 by nkalff        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

// -------------------------------------------------- print char to char
int		ft_putchar(char c);
int		ft_putstr(char *str);
// -------------------------------------------------- print int to char
int		ft_putnbr_base(int n);

#endif
