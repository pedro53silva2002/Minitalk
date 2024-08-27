/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peferrei <peferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:33:08 by peferrei          #+#    #+#             */
/*   Updated: 2024/05/04 17:30:42 by peferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"
/** @brief See if it is a character of the ASCII Table (0-127 value of ascii)
 *  @param number - character value
 *  @return returns 1 if not found and 0 if found
*/
int	ft_isascii(int number)
{
	if (number < 0 || number > 127)
		return (0);
	return (1);
}

/*int	main(void)
{
	printf("%d\n", ft_isascii(111));
	printf("%d", isascii(111));
	return (0);
}*/
