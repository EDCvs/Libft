/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichimvis <ichimvis@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 13:15:07 by ichimvis          #+#    #+#             */
/*   Updated: 2026/09/25 19:07:52 by ichimvis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
PROTOTYPE
----------
		char *ft_strdup(const char *s1)

RETURNS
----------
		A pointer to a newly allocated copy of 's1'.
		NULL if the allocation fails.

DESCRIPTION
----------
		Allocates memory (using malloc(3)) large enough to hold
		a copy of the string 's1', including its terminating
		'\0', then copies 's1' into it.

		The returned string is entirely independent of 's1':
		modifying one does not affect the other. The caller is
		responsible for freeing the returned pointer.
*/
char	*ft_strdup(const char *s1)
{
	return (ft_substr(s1, 0, ft_strlen(s1)));
}

// char	*ft_strdup(const char *s1)
// {
// 	size_t	total;
// 	void	*dup;

// 	total = ft_strlen(s1) + 1;
// 	dup = malloc(total);
// 	if (dup == NULL)
// 		return (NULL);
// 	ft_strlcpy(dup, s1, total);
// 	return ((char *)dup);
// }
