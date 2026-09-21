/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichimvis <ichimvis@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 12:24:12 by ichimvis          #+#    #+#             */
/*   Updated: 2026/09/21 13:16:05 by ichimvis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
PROTOTYPE
----------
		void *ft_memchr(const void *s, int c, size_t n);

RETURNS
----------
		the ft_memchr function returns a pointer to the matching
		byte or NULL if the character does not occur
		in the given memory area.

DESCRIPTION
----------
		The  memchr()  function  scans  the  initial n bytes of the memory area
		pointed to by s for the first instance of c.  Both c and the  bytes  of
		the memory area pointed to by s are interpreted as unsigned char.

*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*buffer1;
	size_t				i;

	buffer1 = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (buffer1[i] == (unsigned char)c)
			return ((void *)&buffer1[i]);
		i++;
	}
	return (NULL);
}
