/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_bonus.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peferrei <peferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 11:01:38 by peferrei          #+#    #+#             */
/*   Updated: 2024/08/21 17:18:56 by peferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_BONUS_H
# define MINITALK_BONUS_H

# define _GNU_SOURCE

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <signal.h>
# include "./Libft/libft.h"

int		ft_handle_args_bonus(int argc, char **argv);
void	ft_send_charbits_bonus(char c, int pid);
char	*ft_minitalk_strjoin_bonus(char *s1, char c);
void	ft_printpid_bonus(int id);
void	signal_handling_bonus(int sigur, siginfo_t *info, void *context);
void	ft_printmsg(int sigur);

#endif