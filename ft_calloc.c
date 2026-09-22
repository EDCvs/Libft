/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichimvis <ichimvis@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 17:54:47 by ichimvis          #+#    #+#             */
/*   Updated: 2026/09/22 12:36:51 by ichimvis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
PROTOTYPE
----------
		void *ft_calloc(size_t nmeb, size_t size)

RETURNS
----------
		A pointer to the newly allocated, zeroed memory block.
		NULL if the allocation fails, or if nmeb * size would
		overflow size_t.

DESCRIPTION
----------
		Allocates memory for an array of 'nmeb' elements, each
		'size' bytes long, using malloc(3), then initializes
		every byte of the block to 0.

		If 'nmeb' or 'size' is 0, a valid, unique pointer is
		still returned (a 1-byte allocation), which can safely
		be passed to free().

		Before allocating, the function checks that nmeb * size
		does not overflow size_t (by dividing the product back
		by 'size' and comparing to 'nmeb'). If it would overflow,
		NULL is returned instead of allocating an incorrect,
		too-small block.
*/
void	*ft_calloc(size_t nmeb, size_t size)
{
	size_t	total;
	void	*space;

	if (nmeb == 0 || size == 0)
		total = 1;
	else
	{
		total = nmeb * size;
		if (total / size != nmeb)
			return (NULL);
	}
	space = malloc(total);
	if (space == NULL)
		return (NULL);
	ft_bzero(space, total);
	return (space);
}
