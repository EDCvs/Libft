/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichimvis <ichimvis@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 15:34:12 by ichimvis          #+#    #+#             */
/*   Updated: 2026/10/18 19:09:42 by ichimvis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
PROTOTYPE
----------
		void ft_lstclear(t_list **lst, void (*del)(void *))

RETURNS
----------
		None (void)

DESCRIPTION
----------
		Deletes and frees every node in the list pointed to by
		'lst', starting from the first one, using 'del' to free
		each node's content and free(3) to free each node
		itself. Once finished, sets the caller's list pointer
		(*lst) to NULL, so it can't be used by accident
		afterward.
*/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*after;

	if (!lst || !del)
		return ;
	current = *lst;
	while (current)
	{
		after = current->next;
		del(current->content);
		free(current);
		current = after;
	}
	*lst = NULL;
}
