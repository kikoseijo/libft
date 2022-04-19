/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseijo-p <jseijo-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 10:12:07 by jseijo-p          #+#    #+#             */
/*   Updated: 2022/04/19 14:31:59 by jseijo-p         ###   ########.fr       */
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

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s2[i] != '\0' && i <= n - 1 && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
