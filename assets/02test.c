// #include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>


int	test2_printf(const char *format, ...)
{
	va_list	arg;
	int		i;

	va_start(arg, format);

	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] == '%')
		{
			
		}
		i++;
	}
	va_end(arg);
	return (i);
}

int	main(void)
{
	test2_printf("Poging1");
	test2_printf("\n");

	printf("Poging1");
	printf("\n");

	return (0);
}
