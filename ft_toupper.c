/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichimvis <ichimvis@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 18:34:21 by ichimvis          #+#    #+#             */
/*   Updated: 2026/08/28 18:54:46 by ichimvis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_toupper(int c) {

    if (c >= 'a' && c <= 'z')
        return (c - 32);
    return (c);
}

// int main(void)
// {
//     char c = '3';
//     char i = ft_toupper(c);
//     printf("%c", i);
// }