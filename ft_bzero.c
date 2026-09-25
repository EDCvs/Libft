/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichimvis <ichimvis@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 13:21:09 by ichimvis          #+#    #+#             */
/*   Updated: 2026/09/25 19:01:46 by ichimvis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
PROTOTYPE
----------
		void ft_bzero(void *s, size_t n);

RETURNS
----------
		None.

DESCRIPTION
----------
		The  bzero()  function  erases  the  data  in the n bytes of the memory
		starting at the location pointed to by s, by writing zeros (bytes  con‐
		taining '\0') to that area.
*/
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
