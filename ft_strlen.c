/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichimvis <ichimvis@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 17:29:16 by ichimvis          #+#    #+#             */
/*   Updated: 2026/08/26 17:40:19 by ichimvis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *s)
{
	int	count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}

// int	main(void)
// {
//     #include <stdio.h>

// 	char *ch = "hello";
// 	int x = ft_strlen(ch);
// 	printf("%d\n", x);
// 	return (0);
// }