/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichimvis <ichimvis@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 13:32:40 by ichimvis          #+#    #+#             */
/*   Updated: 2026/09/21 16:37:38 by ichimvis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
PROTOTYPE
----------
		int ft_memcmp(const void *s1, const void *s2, size_t n);

RETURNS
----------
		The ft_memcmp() function returns  an  integer  less  than,  equal  to,
			 or
		greater than zero if the first n bytes of s1 is found, respectively, to
		be less than, to match, or be greater than the first n bytes of s2.

		For a nonzero return value, the sign is determined by the sign  of  the
		difference  between  the  first  pair of bytes (interpreted as unsigned
		char) that differ in s1 and s2.

		If n is zero, the return value is zero.


DESCRIPTION
----------
       The  ft_memcmp()  function compares the first n bytes (each interpreted as
       unsigned char) of the memory areas s1 and s2.
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*buffer1;
	const unsigned char	*buffer2;

	i = 0;
	buffer1 = (const unsigned char *)s1;
	buffer2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (buffer1[i] != buffer2[i])
			return (buffer1[i] - buffer2[i]);
		i++;
	}
	return (0);
}
