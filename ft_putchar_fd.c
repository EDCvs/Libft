/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichimvis <ichimvis@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 11:01:32 by ichimvis          #+#    #+#             */
/*   Updated: 2026/10/17 12:17:29 by ichimvis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
PROTOTYPE
----------
		void ft_putchar_fd(char c, int fd)

RETURNS
----------
		None (void)

DESCRIPTION
----------
		Writes the single character 'c' to the file descriptor
		'fd'. 'write' needs the *address* of the byte to send,
		so '&c' is passed rather than 'c' itself.
*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
