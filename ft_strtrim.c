/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichimvis <ichimvis@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 14:08:15 by ichimvis          #+#    #+#             */
/*   Updated: 2026/09/25 18:38:09 by ichimvis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
PROTOTYPE
----------
		char *ft_strtrim(char const *s1, char const *set)

RETURNS
----------
		A newly allocated, trimmed copy of 's1'.
		NULL if the allocation fails.

DESCRIPTION
----------
		Allocates memory (using malloc(3)) and returns a copy of
		's1' with any leading and trailing characters found in
		'set' removed. Characters in the middle of the string
		are left untouched, even if they appear in 'set'.

		If the trimmed result would be empty (e.g. every
		character of 's1' is in 'set'), an empty string is
		returned.
*/

int	in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && in_set(s1[end - 1], set))
		end--;
	return (ft_substr(s1, start, end - start));
}

// using pointer arithmetics

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	char const	*start;
// 	char const	*end;
//     // const char const *dafuq;
//     size_t s1_len;

// 	if (!s1 || !set)
// 		return (NULL);

// 	start = s1;

// 	while (start && in_set(*start, set))
// 		start++;

// 	s1_len = ft_strlen(s1);

//     end = s1 + s1_len;

// 	while (end > start && in_set(*(end - 1), set))
// 		end--;

// 	return (ft_substr(s1, start - s1, end - start));
// }
