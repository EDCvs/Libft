/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichimvis <ichimvis@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 14:39:25 by ichimvis          #+#    #+#             */
/*   Updated: 2026/09/25 19:06:44 by ichimvis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
PROTOTYPE
----------
		size_t ft_strlcat(char *dst, const char *src, size_t size);

RETURNS
-------
		The ft_strlcat() function returns the total length of the string it
		tried to create: the length of dst plus the length of src.

		If the return value is greater than or equal to size, truncation
		occurred.

DESCRIPTION
-----------
		The ft_strlcat() function appends the NUL-terminated string src to the
		end of dst. It will append at most size - ft_strlen(dst) - 1 bytes,
		then NUL-terminate dst. It does not write past the end of the destination
		buffer.
*/
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	int		i;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= dst_len)
		return (dst_len + src_len);
	while (dst_len + i + 1 < size && src[i] != '\0')
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}

// int main(void)
// {
//     char dst[] = "llo";
//     char src[] = "He";
//     size_t total_len = ft_strlcat(dst, src, 2);
//     printf("%s with total length %zu\n", dst, total_len);
// }