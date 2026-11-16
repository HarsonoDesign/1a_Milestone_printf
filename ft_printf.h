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

# define BASE_DEC "0123456789"
# define BASE_HEX_LOW "0123456789abcdef"
# define BASE_HEX_UP "0123456789ABCDEF"

int	            ft_printf(const char *format, ...);
int	            ft_specifier(char fs, va_list arg);
int		        ft_putchar(char c);
int		        ft_putstr(const char *str);
unsigned long	ft_baselen(const char *base);
int	            ft_putnbr_uns(unsigned long nbr, const char *base);
int	            ft_putnbr_sign(long nbr, const char *base);

#endif
