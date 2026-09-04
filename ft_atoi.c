/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichimvis <ichimvis@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/04 15:09:37 by ichimvis          #+#    #+#             */
/*   Updated: 2026/09/04 19:06:34 by ichimvis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
PROTOTYPE
----------
		int ft_atoi(const char *nptr);

RETURNS
----------
		The converted value or 0 on error.


DESCRIPTION
----------
		The  ft_atoi() function converts the initial portion of
				the string pointed to by nptr to int -
				it does not detect errors
*/

int	ft_atoi(const char *nptr)
{
	int		i;
	int		sign;
	long	result;

	i = 0;
	sign = 1;
	while (nptr[i] >= 9 && nptr[i] <= 13)
		i++;
	if (nptr[i] == '+')
		i++;
	else if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	result = 0;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return ((int)(result * sign));
}

// int main (void)
// {
//        char testStr[1] = "1";
//        printf("%d\n", ft_atoi(testStr));
// }