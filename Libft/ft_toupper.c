/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peferrei <peferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 15:11:32 by peferrei          #+#    #+#             */
/*   Updated: 2024/05/06 12:27:36 by peferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <ctype.h>
#include "libft.h"
/** @brief Converts lower case letter to upper case letter
 *  @param c - character
 *  @return returns the character
*/
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}

/*int	main(void)
{
	printf("%d\n", ft_toupper(97));
	printf("%d", toupper(97));
	return (0);
}*/
