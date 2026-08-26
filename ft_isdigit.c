/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichimvis <ichimvis@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 17:38:47 by ichimvis          #+#    #+#             */
/*   Updated: 2026/08/26 17:38:48 by ichimvis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

// int	main(void)
// {
// #include <stdio.h>
// 	char ch = '3';
// 	int x = ft_isdigit(ch);
// 	printf("%d\n", x);
// 	return (0);
// }