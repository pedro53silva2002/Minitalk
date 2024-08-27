/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peferrei <peferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:33:08 by peferrei          #+#    #+#             */
/*   Updated: 2024/05/04 17:30:22 by peferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <ctype.h>
#include "libft.h"
/** @brief See if it is a character (a-z or A-Z)
 *  @param c - character
 *  @return returns 1 if not found and 0 if found
*/
int	ft_isalpha(int c)
{
	if (!(c >= 'A' && c <= 'Z')
		&& !(c >= 'a' && c <= 'z'))
	{
		return (0);
	}
	return (1);
}

/*int	main(void)
{
	printf("%d\n", ft_isalpha(67));
	printf("%d", isalpha(67));
	return (0);
}*/
