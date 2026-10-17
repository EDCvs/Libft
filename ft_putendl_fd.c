/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichimvis <ichimvis@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 12:27:17 by ichimvis          #+#    #+#             */
/*   Updated: 2026/10/17 12:29:29 by ichimvis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
PROTOTYPE
----------
		void ft_putendl_fd(char *s, int fd)

RETURNS
----------
		None (void)

DESCRIPTION
----------
		Writes the string 's' to the file descriptor 'fd',
		followed by a newline character.

		If 's' is NULL, the function does nothing and returns
		immediately, since calling ft_strlen on a NULL pointer
		would be undefined behavior.
*/
void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
