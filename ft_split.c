/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichimvis <ichimvis@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 16:34:42 by ichimvis          #+#    #+#             */
/*   Updated: 2026/10/17 10:53:33 by ichimvis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c);
static char		**ft_free_all(char **array, int count);
static char		**ft_fill_array(char **array, char const *s, char c);

/*
PROTOTYPE
----------
		char **ft_split(char const *s, char c)

RETURNS
----------
		An array of strings containing the words from 's', in
		order, terminated by a NULL pointer.
		NULL if 's' is NULL or if any allocation fails along
		the way.

DESCRIPTION
----------
		Splits 's' into words, using 'c' as the delimiter.
		Runs of consecutive delimiters are treated as one
		separator, so no empty strings end up in the result -
		"a,,b" with ',' still produces exactly two words.

		The work is split across three helpers:
		  - ft_count_words determines how many words 's'
		    contains, so the result array can be sized exactly.
		  - ft_fill_array walks 's' once, extracting each word
		    into its own allocated string.
		  - ft_free_all is only used on the failure path: if a
		    word allocation fails partway through, it frees
		    every string already allocated plus the array
		    itself, so nothing is leaked, and returns NULL.

		Every string in the returned array, as well as the
		array itself, is heap-allocated and must eventually be
		freed by the caller.
*/
char	**ft_split(char const *s, char c)
{
	char	**array;

	if (!s)
		return (NULL);
	array = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!array)
		return (NULL);
	return (ft_fill_array(array, s, c));
}

static char	**ft_fill_array(char **array, char const *s, char c)
{
	size_t	word_len;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			word_len = 0;
			while (s[i + word_len] && s[i + word_len] != c)
				word_len++;
			array[j] = ft_substr(s, i, word_len);
			if (!array[j])
				return (ft_free_all(array, j));
			j++;
			i += word_len;
		}
		else
			i++;
	}
	array[j] = NULL;
	return (array);
}

static size_t	ft_count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

static char	**ft_free_all(char **array, int count)
{
	while (count > 0)
		free(array[--count]);
	free(array);
	return (NULL);
}
