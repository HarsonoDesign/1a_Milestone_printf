
// int	ft_putnbr_base(int n)
// {
// 	long	nbr;
// 	int		count;

// 	count = 0;
// 	nbr = (long) n;
// 	if (nbr < 0)
// 	{
// 		nbr = -nbr;
// 	//	ft_putchar('-');
// 		count++;
// 	}
// 	if (nbr >= 10)
// 	{
// 		count = count + ft_putnbr_base(nbr / 10);
// 	}
// 	// ft_putchar(nbr % 10 + '0');
// 	count++;
// 	return (count);
// }

// int	ft_putnbr_base(int n)
// {
// 	long	nbr;
// 	int		count;

// 	count = 0;
// 	nbr = (long) n;
// 	if (nbr < 0)
// 	{
// 		nbr = -nbr;
// 		count += ft_putchar('-');
// 	}
// 	if (nbr >= 10)
// 	{
// 		count += ft_putnbr_base(nbr / 10);
// 	}
// 	count += ft_putchar(nbr % 10 + '0');
// 	return (count);
// }

#include <stdio.h>
#include "ft_printf.h"

int	ft_intlen(int nbr)
{
	int	len;

	len = 0;
	if (nbr <= 0)
	{
		len = 1;
	}
	while (nbr != 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

int	ft_putnbr_base2(long long nbr, char *base)
{
	int			count;
	long long	baselen;

	count = 0;
	baselen = ft_baselen(base);
	if (nbr < 0)
	{
		nbr = -nbr;
		count = count + ft_putchar('-');
	}
	if (nbr >= baselen)
	{
		count = count + ft_putnbr_base2(nbr / baselen, base);
	}
	count = count + ft_putchar(base[nbr % baselen]);
	return (count);
}

int	main(void)
{
	int nbr41 = 512;
	int nbr42 = -512;
	int nbr43 = 0;
	char *base04 = "0123456789";

	printf("\n");
	printf("%d heeft intlen %d\n",nbr41, ft_intlen(nbr41));
	printf("%d heeft intlen %d\n",nbr42, ft_intlen(nbr42));
	printf("%d heeft intlen %d\n",nbr43, ft_intlen(nbr43));
	printf("\n");

	int nbr44 = 123;
	int nbr45 = -123;
	int nbr46 = 0;

	printf("%d\n", ft_putnbr_base(nbr44, base04));
	printf("%d heeft count %d\n", nbr45, ft_putnbr_base2(nbr45, base04));
	printf("%d heeft count %d\n", nbr46, ft_putnbr_base2(nbr46, base04));

	printf("\n");

	return(0);
}
