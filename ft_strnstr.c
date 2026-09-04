/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichimvis <ichimvis@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/04 11:25:34 by ichimvis          #+#    #+#             */
/*   Updated: 2026/09/04 15:05:23 by ichimvis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
PROTOTYPE
----------
		char *ft_strnstr(const char *big, const char *little, size_t len);

RETURNS
----------
		If little is an empty string, big is returned; if little occurs nowhere
		in big, NULL is returned; otherwise a pointer to the first character of
		the first occurrence of little is returned.

DESCRIPTION
----------
		The strnstr() function locates the first occurrence of the null-termi‐
		nated string little in the string big,
			where not more than len characters
		are searched.  Characters that appear after a ‘\0’ character are not
		searched.
*/

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return ((char *)big);
	if (len == 0)
		return (NULL);
	i = 0;
	while (i < len && big[i] != '\0')
	{
		j = 0;
		if (big[i] == little[j])
		{
			while (little[j] && (i + j) < len && big[i + j] && big[i
					+ j] == little[j])
			{
				j++;
			}
			if (little[j] == '\0')
				return ((char *)(big + i));
		}
		i++;
	}
	return (NULL);
}
