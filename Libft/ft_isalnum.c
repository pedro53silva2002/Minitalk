/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peferrei <peferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:33:08 by peferrei          #+#    #+#             */
/*   Updated: 2024/05/04 17:24:57 by peferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"
/** @brief See if it is a character or a digit (0-9 or a-z or A-Z)
 *  @param c - character
 *  @return returns 0 if not found and 1 if found
*/
int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

/*int	main(void)
{
	printf("%d\n", ft_isalnum(70));
	printf("%d", isalnum(70));
	return (0);
}*/
