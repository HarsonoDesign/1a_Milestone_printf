#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	ft_printf("------------------------------------------------ft_printf\n");

	ft_printf("count = %d\n\n", ft_printf("\n|-----------------|\n %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%%%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%%%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%\n\n", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0));

	ft_printf("%%%\n");

	ft_printf("\n een lege string heeft pointer %p\n\n", "");

	ft_printf("|%s|\n\n", "hatsikidee");

	ft_printf("|hex : |%x|\n\n", 'C');

	ft_printf("return = %d\n\n", ft_printf(NULL));

	// ft_printf();

	// ft_printf("\n deze %s string bestaat niet \n",);

	printf("---------------------------------------------------printf\n");

	printf("count = %d\n", printf("\n|-----------------|\n %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%%%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%%%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%\n\n", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0));

	printf("\n %s heeft pointer %p\n\n", "string", "string");

	printf("\n een lege string heeft pointer %p\n\n", "");

	printf("|%s|\n\n", "hatsikidee");

	printf("return = %d\n\n", printf(NULL));

	printf("|hex : |%x|\n\n", 'C');

	// printf("\n deze %s string bestaat niet \n",);



	return (0);
}

