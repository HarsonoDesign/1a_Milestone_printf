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

int	ft_putnbr_base(int n)
{
	long	nbr;
	int		count;

	count = 0;
	nbr = (long) n;
	if (nbr < 0)
	{
		nbr = -nbr;
		count += ft_putchar('-');
	}
	if (nbr >= 10)
	{
		count += ft_putnbr_base(nbr / 10);
	}
	count += ft_putchar(nbr % 10 + '0');
	return (count);
}


int	main(void)
{
	int nbr1 = 512;
	int nbr2 = -512;
	int nbr3 = 0;

	printf("\n");
	printf("%d heeft intlen %d\n",nbr1, ft_intlen(nbr1));
	printf("%d heeft intlen %d\n",nbr2, ft_intlen(nbr2));
	printf("%d heeft intlen %d\n",nbr3, ft_intlen(nbr3));
	printf("\n");

	int nbr4 = 123;
	int nbr5 = -123;
	int nbr6 = 0;

	printf("%d\n", ft_putnbr_base(nbr4));
	printf("%d heeft count %d\n", nbr5, ft_putnbr_base(nbr5));
	printf("%d heeft count %d\n", nbr6, ft_putnbr_base(nbr6));

	printf("\n");

	return(0);
}
