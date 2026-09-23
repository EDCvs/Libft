/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichimvis <ichimvis@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 14:19:06 by ichimvis          #+#    #+#             */
/*   Updated: 2026/09/22 20:55:07 by ichimvis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
PROTOTYPE
----------
		char *ft_substr(char const *s, unsigned int start, size_t len)

RETURNS
----------
		A newly allocated substring of 's'.
		NULL if the allocation fails.

DESCRIPTION
----------
		Allocates memory (using malloc(3)) and returns a new
		string containing the substring of 's' that begins at
		index 'start' and is at most 'len' characters long.

		If 'start' is beyond the end of 's', an empty string is
		returned. If 's' is shorter than 'start + len', the
		substring is truncated to fit within 's'. The returned
		string is always null-terminated.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	remaining;
	char	*sub;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (start > s_len)
	{
		sub = malloc(1);
		if (sub == NULL)
			return (NULL);
		sub[0] = '\0';
		return (sub);
	}
	remaining = s_len - start;
	if (len < remaining)
		remaining = len;
	sub = malloc(remaining + 1);
	if (sub == NULL)
		return (NULL);
	ft_strlcpy(sub, s + start, remaining + 1);
	return (sub);
}
