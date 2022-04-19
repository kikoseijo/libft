/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_putnbr_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseijo-p <jseijo-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 10:23:09 by jseijo-p          #+#    #+#             */
/*   Updated: 2022/04/19 14:21:32 by jseijo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Outputs the integer ’n’ to the given file
** descriptor.
*/

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}
