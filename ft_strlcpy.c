/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichimvis <ichimvis@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 17:44:14 by ichimvis          #+#    #+#             */
/*   Updated: 2026/09/23 12:09:56 by ichimvis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
PROTOTYPE
----------
		size_t ft_strlcpy(char *dst, const char *src, size_t size);

RETURNS
-------
		The ft_strlcpy() function returns the length of src.

		If the return value is greater than or equal to size, truncation
		occurred.

DESCRIPTION
-----------
		The ft_strlcpy() function copies the NUL-terminated string src to dst.
		It copies at most size - 1 bytes, NUL-terminates dst when size is
		greater than 0, and does not write past the end of the destination
		buffer.
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
