/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichimvis <ichimvis@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 15:14:05 by ichimvis          #+#    #+#             */
/*   Updated: 2026/10/17 16:50:11 by ichimvis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
PROTOTYPE
----------
		t_list *ft_lstnew(void *content)

RETURNS
----------
		A pointer to the newly allocated node.
		NULL if the allocation fails.

DESCRIPTION
----------
		Allocates memory (using malloc(3)) and returns a new
		node. 'content' is stored as-is (the node does not copy
		or take ownership of whatever it points to - it just
		holds the address). 'next' is initialized to NULL, since
		a freshly created node isn't attached to anything yet.
*/
t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
