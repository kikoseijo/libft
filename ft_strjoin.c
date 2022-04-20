/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_strjoin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseijo-p <jseijo-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 10:15:24 by jseijo-p          #+#    #+#             */
/*   Updated: 2022/04/20 11:52:59 by jseijo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc(3)) and returns a new
** string, which is the result of the concatenation
** of ’s1’ and ’s2’.
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		len;
	char	*res;

	i = 0;
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	res = ft_calloc(len, sizeof(char *));
	while (s1[i] != '\0')
	{
		res[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		res[i] = s2[j];
		j++;
		i++;
	}
	res[i] = '\0';
	return (res);
}
