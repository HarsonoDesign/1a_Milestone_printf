// #include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	test1_printf(const char *format, ...)
{
	int	i;

	i = 0;
	while (format[i] != '\0')
	{
		ft_putchar(format[i]);
		i++;
	}
	if (format[i] == '\0')
	{
		ft_putchar(format[i]);
	}
	return (i);
}

int	main(void)
{
	test1_printf("Poging1");
	test1_printf("\n");

	printf("Poging1");
	printf("\n");

	return (0);
}
