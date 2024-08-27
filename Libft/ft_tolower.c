/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peferrei <peferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:19:49 by peferrei          #+#    #+#             */
/*   Updated: 2024/05/06 12:29:46 by peferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <ctype.h>
#include "libft.h"
/** @brief Converts upper case letter to lower case letter
 *  @param c - character
 *  @return returns the character
*/
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 32;
	}
	return (c);
}

/*int	main(void)
{
	printf("%d\n", ft_tolower(55));
	printf("%d", tolower(55));
	return (0);
}*/
