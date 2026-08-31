/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichimvis <ichimvis@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 14:45:56 by ichimvis          #+#    #+#             */
/*   Updated: 2026/08/31 17:05:17 by ichimvis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
PROTOTYPE
----------
		char *ft_strrchr(const char *s, int c);

RETURNS
----------
		The ft_strrchr() function returns a pointer  to  the  matched
		character or NULL if the character is not found.  The terminating null
		byte is considered part of the string, so that if  c  is  specified  as
		'\0', these functions return a pointer to the terminator.

DESCRIPTION
----------
		The ft_strrchr() function returns a pointer to the last occurrence of
        the character c in the string s.

		Here "character" means "byte"; these functions do not work with wide or
		multibyte characters.
*/

char	*ft_strrchr(const char *s, int c)
{
	char	*lastmatch;

	lastmatch = NULL;
	while (*s)
	{
		if (*s == (unsigned char)c)
			lastmatch = (char *)s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (lastmatch);
}

// int main(void)
// {
//     char *x = "HELLO";
//     char *y = ft_strrchr(x, '\0');

//     printf("%d", (y == (x+5)));
// }
