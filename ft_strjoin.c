/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichimvis <ichimvis@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 12:30:21 by ichimvis          #+#    #+#             */
/*   Updated: 2026/09/25 15:32:34 by ichimvis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
PROTOTYPE
----------
		char *ft_strjoin(char const *s1, char const *s2)

RETURNS
----------
		A newly allocated string that is the concatenation of
		's1' and 's2'.
		NULL if the allocation fails.

DESCRIPTION
----------
		Allocates memory (using malloc(3)) and returns a new
		string, which is the result of concatenating 's1' and
		's2'. Neither 's1' nor 's2' is modified. The caller is
		responsible for freeing the returned string.
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*temp;
	char	*output;

	if (!s1 || !s2)
		return (NULL);
	output = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!output)
		return (NULL);
	temp = output;
	while (*s1)
		*temp++ = *s1++;
	while (*s2)
		*temp++ = *s2++;
	*temp = '\0';
	return (output);
}
