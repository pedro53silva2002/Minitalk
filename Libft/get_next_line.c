/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peferrei <peferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 10:55:08 by peferrei          #+#    #+#             */
/*   Updated: 2024/08/16 15:01:57 by peferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include "libft.h"

static char	*set_stash(char *stash)
{
	char	*new_stash;
	size_t	i;
	size_t	j;

	if (!stash)
		return (NULL);
	new_stash = stash;
	i = 0;
	j = 0;
	while (stash[i] != '\n' && stash[i] != '\0')
		i++;
	while (stash[j] != '\0')
		j++;
	new_stash = ft_getnextline_substr(stash, i + 1, j - i);
	if (!new_stash)
		return (free(new_stash), NULL);
	free(stash);
	return (new_stash);
}

static char	*fill_line_buffer(int fd, char *stash, char *buffer)
{
	int	read_size;

	read_size = BUFFER_SIZE;
	while (read_size != 0 && (!ft_getnextline_strchr(buffer, '\n')))
	{
		read_size = read(fd, buffer, BUFFER_SIZE);
		if (read_size < 0)
			return (free(stash), NULL);
		if (read_size == 0)
			break ;
		buffer[read_size] = '\0';
		stash = ft_getnextline_strjoin(stash, buffer);
		if (!stash)
			return (NULL);
	}
	return (stash);
}

static char	*check_sorb(char *stash)
{
	if (!stash)
	{
		stash = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
		if (!stash)
			return (free(stash), NULL);
		*stash = 0;
		return (stash);
	}
	return (stash);
}

static char	*to_be_or_not_to_be_free(char	*tobe)
{
	free(tobe);
	tobe = NULL;
	return (tobe);
}

char	*get_next_line(int fd)
{
	static char	*stash[MAX_FD];
	char		*buffer;
	char		*result;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	stash[fd] = check_sorb(stash[fd]);
	buffer = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buffer)
		return (free(stash[fd]), NULL);
	*buffer = 0;
	stash[fd] = fill_line_buffer(fd, stash[fd], buffer);
	buffer = to_be_or_not_to_be_free(buffer);
	if (stash[fd] == NULL || stash[fd][0] == '\0')
	{
		stash[fd] = to_be_or_not_to_be_free(stash[fd]);
		return (NULL);
	}
	result = ft_getnextline_strdupn(stash[fd]);
	if (result == NULL || result[0] == '\0')
		return (free(stash[fd]), free(result), NULL);
	stash[fd] = set_stash(stash[fd]);
	if (*stash[fd] == '\0')
		stash[fd] = to_be_or_not_to_be_free(stash[fd]);
	return (result);
}
