/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichimvis <ichimvis@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 12:25:08 by ichimvis          #+#    #+#             */
/*   Updated: 2026/10/18 13:02:12 by ichimvis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
PROTOTYPE
----------
		unsigned int ft_lstsize(t_list *lst)

RETURNS
----------
		The number of nodes in the list.

DESCRIPTION
----------
		Counts the nodes in the list starting at 'lst' by
		following each node's 'next' pointer until reaching
		NULL.
*/
unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
