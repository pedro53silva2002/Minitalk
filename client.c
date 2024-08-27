/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peferrei <peferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:24:24 by peferrei          #+#    #+#             */
/*   Updated: 2024/08/26 14:42:26 by peferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <signal.h>
#include "minitalk.h"
#include "./Libft/libft.h"

void	ft_send_charbits(char c, int pid)
{
	int	i;

	i = -1;
	while (++i < 8)
	{
		if (((1 << i) & c))
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		usleep(500);
	}
}

int	ft_handle_args(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 3)
	{
		return (0);
	}
	while (argv[1][i])
	{
		if (!ft_isdigit(argv[1][i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int		pid;
	int		i;

	if (!ft_handle_args(argc, argv))
	{
		return (0);
	}
	i = 0;
	pid = ft_atoi(argv[1]);
	while (argv[2][i] != '\0')
	{
		ft_send_charbits(argv[2][i], pid);
		i++;
	}
	ft_send_charbits('\0', pid);
	return (0);
}
