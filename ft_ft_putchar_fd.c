/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_putchar_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseijo-p <jseijo-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 10:20:34 by jseijo-p          #+#    #+#             */
/*   Updated: 2022/04/19 14:24:28 by jseijo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Outputs the character ’c’ to the given file
** descriptor.
*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (c != NULL)
		write(fd, &c, 1);
}
