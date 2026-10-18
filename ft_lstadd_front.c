/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichimvis <ichimvis@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 16:50:55 by ichimvis          #+#    #+#             */
/*   Updated: 2026/10/18 12:23:04 by ichimvis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
PROTOTYPE
----------
		void ft_lstadd_front(t_list **lst, t_list *new)

RETURNS
----------
		None (void)

DESCRIPTION
----------
		Adds the node 'new' at the beginning of the list pointed
		to by 'lst'. 'new' becomes the new first node, and its
		'next' is set to point at whatever used to be the first
		node (or NULL, if the list was empty).

		'lst' is a pointer to the caller's head-of-list variable
		(t_list **, not t_list *), because this function needs
		to change what that variable points to - a plain t_list
		would only let it see a copy of the current head, not
		update the caller's original.
*/
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
