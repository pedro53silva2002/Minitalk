/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peferrei <peferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 11:01:38 by peferrei          #+#    #+#             */
/*   Updated: 2024/08/21 16:29:30 by peferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# define _GNU_SOURCE

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <signal.h>
# include "./Libft/libft.h"

int		ft_handle_args(int argc, char **argv);
void	ft_send_charbits(char c, int pid);
char	*ft_minitalk_strjoin(char *s1, char c);
void	ft_printpid(int id);
void	signal_handling(int sigur);

#endif