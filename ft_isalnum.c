/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseijo-p <jseijo-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 21:10:27 by jseijo-p          #+#    #+#             */
/*   Updated: 2022/04/13 19:51:55 by jseijo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Re-coding of the outdated Standard C Library function isalnum(3).
** Parameters: integer c, likely in ASCII or extended ASCII range
** Side effect: none
** Return value: 0 if the unsigned char cast of c is neither an upper- or
** lower-case letter nor digit, or if it is, then 1 is returned in this
** implementation - another route would be to return c
*/

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
