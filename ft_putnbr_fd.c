/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichimvis <ichimvis@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 12:31:00 by ichimvis          #+#    #+#             */
/*   Updated: 2026/10/19 10:24:54 by ichimvis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
PROTOTYPE
----------
		void ft_putnbr_fd(int n, int fd)

RETURNS
----------
		None (void)

DESCRIPTION
----------
		Writes the integer 'n' to the file descriptor 'fd' as
		its decimal text representation (e.g. 42 -> "42").
		Handles negative numbers, including INT_MIN, by widening
		to 'long' before negating.
*/
void	ft_putnbr_fd(int n, int fd)
{
	long	num;
	char	digit;

	num = n;
	if (n < 0)
	{
		write(fd, &"-", 1);
		num = -num;
	}
	if (num >= 10)
		ft_putnbr_fd(num / 10, fd);
	digit = (num % 10) + '0';
	write(fd, &digit, 1);
}
