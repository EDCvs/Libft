/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichimvis <ichimvis@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 12:25:05 by ichimvis          #+#    #+#             */
/*   Updated: 2026/09/21 21:11:17 by ichimvis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
PROTOTYPE
----------
		void *ft_memset(void *s, int c, size_t n);

RETURNS
----------
		The ft_memset() function returns a pointer to the memory area s.

DESCRIPTION
----------
		The  ft_memset()  function  fills  the  first  n 
        bytes of the memory area pointed to by s with the constant byte c.
*/

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = (unsigned char)c;
		ptr++;
		n--;
	}
	return (s);
}
