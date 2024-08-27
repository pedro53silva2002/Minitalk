/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peferrei <peferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:18:07 by peferrei          #+#    #+#             */
/*   Updated: 2024/05/06 11:57:06 by peferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
/** @brief Writes n bytes of null into a string
 *  @param s - string
 *  @param n - len of bytes
*/
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*b;
	size_t			i;

	b = s;
	i = 0;
	while (i < n)
	{
		b[i] = (unsigned char) '\0';
		i++;
	}
}

/*int	main(void)
{
	char str[50] = "WEWOWEOEOWEOWEOWOEOWOEW";
	bzero(str, 1);
	printf("And here's the result: (what were u expecting?...)");
	return (0);
}*/
