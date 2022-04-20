/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseijo-p <jseijo-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 10:12:50 by jseijo-p          #+#    #+#             */
/*   Updated: 2022/04/20 10:21:41 by jseijo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** stdlib.h
**
** The calloc() function contiguously allocates enough space
** for count objects that are size bytes of memory each and
** returns a pointer to the allocated memory.
** The allocated memory is filled with bytes of value zero.
**
** Allowed functions malloc(3)
*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;

	res = (void *)malloc(size * count);
	if (!res)
		return (NULL);
	ft_bzero(res, count);
	return (res);
}
