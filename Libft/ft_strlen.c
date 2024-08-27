/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peferrei <peferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 20:18:13 by peferrei          #+#    #+#             */
/*   Updated: 2024/08/16 14:55:24 by peferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <string.h>
#include "libft.h"
/** @brief Finds the length of a string
 *  @param str - string
 *  @return returns the length of the string
*/
size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*int	main(void)
{
	char *string;
	string = "LMAO";
	printf("%zu\n", ft_strlen(string));
	printf("%lu\n", strlen(string));
	return (0);
}*/
