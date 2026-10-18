/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichimvis <ichimvis@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 13:03:24 by ichimvis          #+#    #+#             */
/*   Updated: 2026/10/18 14:18:22 by ichimvis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
PROTOTYPE
----------
		t_list *ft_lstlast(t_list *lst)

RETURNS
----------
		The last node of the list.

DESCRIPTION
----------
		Walks the list starting at 'lst', following each node's
		'next' pointer, and returns the final node - the one
		whose 'next' is NULL.
*/
t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
