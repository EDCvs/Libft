/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichimvis <ichimvis@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 17:29:16 by ichimvis          #+#    #+#             */
/*   Updated: 2026/09/02 14:36:03 by ichimvis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	count;

	count = 0;
	while (s[count] != '\0')
		count++;
	return (count);
}

// int	main(void)
// {
//     #include <stdio.h>

// 	char *ch = "this is iddy";
// 	int x = ft_strlen(ch);
// 	printf("%d\n", x);
// 	return (0);
// }