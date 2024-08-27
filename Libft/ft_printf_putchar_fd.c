/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_putchar_fd.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peferrei <peferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:04:50 by peferrei          #+#    #+#             */
/*   Updated: 2024/06/18 15:41:27 by peferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"
#include <unistd.h>
/** @brief Writes a character on a specified file descriptor
 * 	@param c - character
 * 	@param fd - specified file descriptor
*/
int	ft_printfputchar_fd(char c, int fd)
{
	write(fd, &c, 1);
	return (1);
}

/*int	main(void)
{
	ft_putchar('t', 1);
	return (0);
}*/
