/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkalff <nkalff@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/07 20:04:36 by nkalff        #+#    #+#                 */
/*   Updated: 2026/11/07 20:04:39 by nkalff        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putchar(char c)
{
    write (1, &c, 1);
}

void    ft_putstr(char *str);
{
    if (!str)
    {
        return ;
    }
    write(1, str, ft_strlen(str));
}

int ft_printf(const char *format, ...)
{

}
