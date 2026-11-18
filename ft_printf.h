/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkalff <nkalff@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/07 20:05:31 by nkalff        #+#    #+#                 */
/*   Updated: 2026/11/17 18:39:40 by nkalff        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

// <unistd.h> write - <stdint.h> uintptr_t - <stdarg.h> va_list 

# include <unistd.h>
# include <stdint.h>
# include <stdarg.h>

# define BASE_DEC "0123456789"
# define BASE_HEX_LOW "0123456789abcdef"
# define BASE_HEX_UP "0123456789ABCDEF"

int			ft_specifier(char fs, va_list arg);
int			ft_printf(const char *format, ...);
int			ft_putchar(char c);
int			ft_putstring(const char *str);
long long	ft_baselen(const char *base);
int			ft_putnbr_base(long long nbr, const char *base);
int			ft_putpointr(uintptr_t address);

#endif
