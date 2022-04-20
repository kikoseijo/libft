/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_striteri.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseijo-p <jseijo-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 10:19:44 by jseijo-p          #+#    #+#             */
/*   Updated: 2022/04/20 13:58:57 by jseijo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Applies the function ’f’ on each character of
** the string passed as argument, passing its index
** as first argument. Each character is passed by
** address to ’f’ to be modified if necessary.
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	while (s[i] != '\0' && *f)
	{
		(*f)(i, s + i);
		i++;
	}
}
