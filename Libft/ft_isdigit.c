/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peferrei <peferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:11:11 by peferrei          #+#    #+#             */
/*   Updated: 2024/05/04 17:30:31 by peferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <ctype.h>
#include "libft.h"
/** @brief See if it is a digit (0-9)
 *  @param c - character
 *  @return returns 1 if not found and 0 if found
*/
int	ft_isdigit(int c)
{
	if (c < 48 || c > 57)
	{
		return (0);
	}
	return (1);
}

/*int	main(void)
{
	printf("%d\n", ft_isdigit(55));
	printf("%d", isdigit(55));
	return (0);
}*/
