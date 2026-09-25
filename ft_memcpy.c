/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichimvis <ichimvis@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 17:27:02 by ichimvis          #+#    #+#             */
/*   Updated: 2026/09/25 19:07:05 by ichimvis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
PROTOTYPE
----------
		void *ft_memcpy(void *dest, const void *src, size_t n);

RETURNS
----------
		The ft_memcpy() function returns a pointer to dest.

DESCRIPTION
----------
		The  ft_memcpy()  function  copies  n bytes from
		memory area src to memory area dest.
		The memory areas must not overlap.
		Use memmove(3)  if  the memory areas do overlap.
*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*buffer1;
	const unsigned char	*buffer2;

	buffer1 = dest;
	buffer2 = src;
	i = 0;
	while (i < n)
	{
		buffer1[i] = buffer2[i];
		i++;
	}
	return (dest);
}
