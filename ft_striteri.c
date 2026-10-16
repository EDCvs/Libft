/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichimvis <ichimvis@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 16:14:55 by ichimvis          #+#    #+#             */
/*   Updated: 2026/10/16 16:14:59 by ichimvis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
PROTOTYPE
----------
		void ft_striteri(char *s, void (*f)(unsigned int, char *))

RETURNS
----------
		None (void)

DESCRIPTION
----------
		Applies the function 'f' to each character of the string
		's', passing that character's index as the first
		argument. Each character is passed to 'f' by address
		(not by value), so 'f' may modify it in place.
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	s_len;
	size_t	i;

	s_len = ft_strlen(s);
	i = 0;
	while (i < s_len)
	{
		f(i, &s[i]);
		i++;
	}
}
