/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peferrei <peferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:24:26 by peferrei          #+#    #+#             */
/*   Updated: 2024/08/23 13:48:55 by peferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <signal.h>
#include <sys/types.h>
#include "minitalk_bonus.h"
#include "./Libft/libft.h"

char	*g_final_str = "";

char	*ft_minitalk_strjoin_bonus(char *s1, char c)
{
	size_t	i;
	char	*str;

	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 2));
	if (!str)
		return (0);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = c;
	str[++i] = '\0';
	if (*s1 != '\0')
		free(s1);
	return (str);
}

void	ft_printpid_bonus(int id)
{
	ft_printf("\033[0;32m\n");
	ft_printf("# # ### ### ### ###  #  #   # # \n");
	ft_printf("###  #  # #  #   #  # # #   # # \n");
	ft_printf("###  #  # #  #   #  ### #   ##  \n");
	ft_printf("# #  #  # #  #   #  # # #   # # \n");
	ft_printf("# # ### # # ###  #  # # ### # # \n");
	ft_printf("PID: [%d]\033[0m\n", id);
}

void	signal_handling_bonus(int sigur, siginfo_t *info, void *context)
{
	static int	bits_shift;
	static char	letter;

	(void) context;
	if (sigur == SIGUSR2)
		letter |= (1 << bits_shift);
	else
		letter |= (0 << bits_shift);
	bits_shift++;
	if (bits_shift == 8 && letter == '\0')
	{
		bits_shift = 0;
		letter = 0;
		printf("%s\n", g_final_str);
		if (g_final_str[0] != '\0')
			free(g_final_str);
		g_final_str = "";
		kill(info->si_pid, SIGUSR1);
	}
	else if (bits_shift == 8)
	{
		g_final_str = ft_minitalk_strjoin_bonus(g_final_str, letter);
		bits_shift = 0;
		letter = 0;
	}
}

int	main(void)
{
	pid_t				pid;
	struct sigaction	action;

	pid = getpid();
	action.sa_sigaction = &signal_handling_bonus;
	action.sa_flags = SA_SIGINFO;
	ft_printpid_bonus(pid);
	while (1)
	{
		sigaction(SIGUSR2, &action, NULL);
		sigaction(SIGUSR1, &action, NULL);
		pause();
	}
	return (0);
}
