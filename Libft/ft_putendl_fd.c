/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peferrei <peferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:13:01 by peferrei          #+#    #+#             */
/*   Updated: 2024/05/06 14:42:02 by peferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <unistd.h>
/** @brief Writes a string on a specified file descriptor, followed by a newline
 * 	@param str - string
 * 	@param fd - specified file descriptor
*/
void	ft_putendl_fd(char *str, int fd)
{
	int		i;

	if (str)
	{
		i = 0;
		while (str[i] != '\0')
		{
			write(fd, &str[i], 1);
			i++;
		}
		write(fd, "\n", 1);
	}
}

/*int	main(void)
{
	char	*string;

	string = "LMAO";
	ft_putendl_fd(string, 1);
	return (0);
}*/
