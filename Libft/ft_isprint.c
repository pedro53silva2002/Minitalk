/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peferrei <peferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:26:12 by peferrei          #+#    #+#             */
/*   Updated: 2024/05/04 17:31:00 by peferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <ctype.h>
#include "libft.h"
/** @brief Checks if it is a printable character
 *  @param c - character value
 *  @return returns 1 if not found and 0 if found
*/
int	ft_isprint(int c)
{
	if (c > 126 || c < 32)
	{
		return (0);
	}
	return (1);
}

/*int	main(void)
{
	printf("%d\n", ft_isprint(56));
	printf("%d", isprint(56));
	return (0);
}*/
