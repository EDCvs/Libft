/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichimvis <ichimvis@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 12:19:59 by ichimvis          #+#    #+#             */
/*   Updated: 2026/10/17 12:25:31 by ichimvis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
PROTOTYPE
----------
		void ft_putstr_fd(char *s, int fd)

RETURNS
----------
		None (void)

DESCRIPTION
----------
		Writes the string 's' to the file descriptor 'fd', using
		ft_strlen to determine how many bytes to send (write
		does not stop at '\0' on its own - it only knows the
		count you give it).

		if 's' is NULL, the function does nothing and returns
		immediately, since calling ft_strlen on a NULL pointer
		would be undefined behavior.
*/
void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
