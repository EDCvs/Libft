/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichimvis <ichimvis@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 10:43:25 by ichimvis          #+#    #+#             */
/*   Updated: 2026/08/31 15:38:10 by ichimvis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
PROTOTYPE
----------
		char *strchr(const char *s, int c);

RETURNS
----------
		The strchr() and strrchr() functions return a pointer  to  the  matched
		character  or NULL if the character is not found.  The terminating null
		byte is considered part of the string, so that if  c  is  specified  as
		'\0', these functions return a pointer to the terminator.

DESCRIPTION
----------
		The  strchr() function returns a pointer to the first
		occurrence of the character c in the string s.
*/

char	*ft_strchr(const char *s, int c)
{
	unsigned char	target;

	target = (unsigned char)c;
	while (*s && *s != target)
		s++;
	if (*s == target)
		return ((char *)s);
	return (NULL);
}

// int main(void)
// {
//     char *x = "Hello";
//     char *y = ft_strchr(x, 'e');

//     printf("%s", y);
// }

/*
	int i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	if (s[i] == c)
		return ((char *)&s[i]);
	return (NULL);
*/