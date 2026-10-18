/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichimvis <ichimvis@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 15:07:09 by ichimvis          #+#    #+#             */
/*   Updated: 2026/10/18 15:32:19 by ichimvis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
PROTOTYPE
----------
		void ft_lstdelone(t_list *lst, void (*del)(void *))

RETURNS
----------
		None (void)

DESCRIPTION
----------
		Frees the content of a single node using the function
		'del', then frees the node itself. Does NOT touch or
		free 'next' - the rest of the list, if any, is left
		completely intact.
*/
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
