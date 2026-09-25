/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichimvis <ichimvis@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 17:10:29 by ichimvis          #+#    #+#             */
/*   Updated: 2026/09/21 12:17:05 by ichimvis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
PROTOTYPE
----------
		void *ft_memmove(void *dest, const void *src, size_t n);

RETURNS
----------
		...
		The ft_memmove() function returns a pointer to dest.

DESCRIPTION
----------
The	ft_memmove(void)  function  copies n bytes from memory area src to memory
area dest.  The memory areas may overlap: copying takes place as though
the  bytes in src are first copied into a temporary array that does not
overlap src or dest, and the bytes are then copied from  the  temporary
array to dest.

*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*buffer1;
	const unsigned char	*buffer2;

	buffer1 = (unsigned char *)dest;
	buffer2 = (const unsigned char *)src;
	i = 0;
	if (dest == src || n == 0)
		return (dest);
	if (buffer1 < buffer2)
	{
		while (i < n)
		{
			buffer1[i] = buffer2[i];
			i++;
		}
	}
	else
	{
		while (n--)
			buffer1[n] = buffer2[n];
	}
	return (dest);
}
