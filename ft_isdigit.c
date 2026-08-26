#include <stdio.h>

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

// int	main(void)
// {
// 	char ch = '3';
// 	int x = ft_isdigit(ch);
// 	printf("%d\n", x);
// 	return (0);
// }