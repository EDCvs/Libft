/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichimvis <ichimvis@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 16:12:28 by ichimvis          #+#    #+#             */
/*   Updated: 2026/10/16 16:14:40 by ichimvis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
PROTOTYPE
---------

```
	char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
```

## RETURNS

```
	A newly allocated string built from applying 'f' to
	each character of 's'.
	NULL if 's' or 'f' is NULL, or if the allocation fails.
```

## DESCRIPTION

```
	Applies the function 'f' to each character of the string
	's', passing that character's index as the first
	argument and the character itself as the second.
	Each call's return value becomes the corresponding
	character in a newly allocated result string.
	's' itself is never modified.

	Returns NULL if either 's' or 'f' is NULL.
```

*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	s_len;
	size_t	i;
	char	*new;

	if (!s || !f)
		return (NULL);
	s_len = ft_strlen(s);
	new = malloc(s_len + 1);
	if (!new)
		return (NULL);
	i = 0;
	while (i < s_len)
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
