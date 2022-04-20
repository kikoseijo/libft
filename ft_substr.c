/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_substr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseijo-p <jseijo-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 10:14:03 by jseijo-p          #+#    #+#             */
/*   Updated: 2022/04/20 13:12:30 by jseijo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc(3)) and returns a substring
** from the string ’s’.
** The substring begins at index ’start’ and is of
** maximum size ’len’.
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*res;

	i = 0;
	res = ft_calloc(len + 1, sizeof(char *));
	while (start < len)
	{
		res[i] = s[start];
		start++;
		i++;
	}
	res[i] = '\0';
	return (res);
}
