#include <unistd.h>
#include <stdio.h>

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
	return (i);
}

int	main(void)
{
	char	str3[] = "codam";

	ft_putstr(str3);


	printf("\n");
	printf("%zu", write(1, str3, 5));
	printf("\n");

	return (0);
}
