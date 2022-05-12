/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseijo-p <jseijo-p@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 08:33:21 by jseijo-p          #+#    #+#             */
/*   Updated: 2022/05/12 14:45:20 by jseijo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*remove_line(char *buffer)
{
	int		i;
	char	*l_buff;

	i = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (!buffer[i])
	{
		free(buffer);
		return (NULL);
	}
	l_buff = ft_substr(buffer, i + 1, ft_strlen(buffer));
	free(buffer);
	return (l_buff);
}

static char	*get_line(char *buffer)
{
	char	*line;
	int		i;

	if (!buffer[0])
		return (NULL);
	i = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (buffer[i] == '\n')
		line = ft_substr(buffer, 0, i + 1);
	else
	{
		line = ft_calloc(ft_strlen(buffer) + 1, sizeof(char));
		line = ft_memcpy(line, buffer, ft_strlen(buffer));
	}
	return (line);
}

static char	*read_line(int fd, char *buffer)
{
	long	read_count;
	char	*buff_read;
	char	*l_buff;

	buff_read = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (!buff_read)
		return (NULL);
	read_count = 1;
	while (!ft_strchr(buffer, '\n') && read_count != 0)
	{
		read_count = read(fd, buff_read, BUFFER_SIZE);
		if (read_count == -1)
		{
			free(buff_read);
			return (NULL);
		}
		buff_read[read_count] = '\0';
		l_buff = buffer;
		buffer = ft_strjoin(l_buff, buff_read);
		free(l_buff);
	}
	free(buff_read);
	return (buffer);
}

char	*get_next_line(int fd)
{
	static char	*buff[256];
	char		*line;

	if (fd < 0 || BUFFER_SIZE < 1 || (read(fd, 0, 0) < 0))
		return (NULL);
	buf[fd] = read_line(fd, buf[fd]);
	if (!buf[fd])
		return (NULL);
	line = get_line(buf[fd]);
	buf[fd] = remove_line(buf[fd]);
	return (line);
}
