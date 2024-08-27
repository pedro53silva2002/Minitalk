/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peferrei <peferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:05:53 by peferrei          #+#    #+#             */
/*   Updated: 2024/05/06 14:41:29 by peferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <unistd.h>
/** @brief Writes a string on a specified file descriptor
 * 	@param str - string
 * 	@param fd - specified file descriptor
*/
void	ft_putstr_fd(char *str, int fd)
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
	}
}

/*int	main(void)
{
	char	*string;

	string = "LMAO";
	ft_putstr_fd(string, 1);
	return (0);
}*/
