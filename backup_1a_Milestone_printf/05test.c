#include "ft_printf.h"
#include <stdio.h>

int	ft_putpointr2(uintptr_t address)
{
	int			count;
	char		*base;
	long long	baselen;

	base = "0123456789abcdef";

	if (!address)
	{
		return (ft_putstr("(nil)"));
	}
	count = 0;
	baselen = ft_baselen(base);
	if (address >= 16)
	{
		count += ft_putpointr2(address / baselen);
	}
	else
	{
		count += ft_putstr("0x");
	}
	count += ft_putchar(base[address % baselen]);
	return (count);
}

int	main(void)
{
	char	*str;

	str = "hallo";

	printf("\n");
	printf("printf ptr = %p\n", str);
	printf("\n");

	return (0);
}
