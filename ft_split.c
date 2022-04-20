/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseijo-p <jseijo-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 10:16:59 by jseijo-p          #+#    #+#             */
/*   Updated: 2022/04/20 18:02:08 by jseijo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc(3)) and returns an array
** of strings obtained by splitting ’s’ using the
** character ’c’ as a delimiter. The array must end
** with a NULL pointer.
*/

#include "libft.h"

static int	ft_wordcount(char *s, int sep)
{
	int	i;

	i = 0;
	while (*s)
	{
		while (*s == (char)sep)
			s++;
		if (!*s)
			break ;
		while (*s != (char)sep && *s)
			s++;
		i++;
	}
	return (i);
}

static int	ft_count_next_word_len(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		end;
	char	**tab;

	if (!s)
		return (ft_calloc(0, sizeof(char *)));
	tab = ft_calloc(ft_wordcount((char *)s, c) + 1, sizeof(char *));
	if (!tab)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		end = ft_count_next_word_len(&((char *)s)[i], c);
		tab[j] = ft_substr(&((char *)s)[i], 0, end);
		i++;
		j++;
	}
	return (tab);
}
