/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseijo-p <jseijo-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 10:12:07 by jseijo-p          #+#    #+#             */
/*   Updated: 2022/04/21 10:15:16 by jseijo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** string.h
** The strcmp() and strncmp() functions lexicographically
** compare the null-terminated strings s1 and s2.
**
** The strncmp() function compares not more than n characters.
** Because strncmp() is designed for comparing strings rather than binary data,
** characters that appear after a `\0' character are not compared.
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n)
	{
		if (*s1++ != *s2++)
			return (*(s1 - 1) - *(s2 - 1));
		n--;
	}
	return (0);
}
