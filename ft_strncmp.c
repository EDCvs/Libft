/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichimvis <ichimvis@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 09:48:55 by ichimvis          #+#    #+#             */
/*   Updated: 2026/09/02 11:18:38 by ichimvis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
PROTOTYPE
----------
		int ft_strncmp(const char *s1, const char *s2, size_t n);

RETURNS
----------
		The ft_strncmp() function returns an integer less than, equal
		to, or greater than zero if s1 (or the first n bytes thereof) is found,
		respectively, to be less than, to match, or be greater than s2.

DESCRIPTION
----------
		The ft_strncmp() function compares only  the  first
		(at most) n bytes of s1 and s2.

		It returns an integer indicating the result of the comparison, as
		follows:

		• 0, if the s1 and s2 are equal;

		• a negative value if s1 is less than s2;

		• a positive value if s1 is greater than s2.

*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i] && i < n)
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// int main(void)
// {
//     char *s1 = "Hellp";
//     char *s2 = "Hellq";

//     printf("%d \n", ft_strncmp(s1, s2, 6));
// }