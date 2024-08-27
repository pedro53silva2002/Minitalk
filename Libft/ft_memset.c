/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peferrei <peferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:12:42 by peferrei          #+#    #+#             */
/*   Updated: 2024/05/04 17:39:18 by peferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
/** @brief Writes n bytes of value c into the string
 *  @param s - string
 *  @param c - character to put
 *  @param n - len of bytes
 *  @return returns string with the charaterc in n bytes written
*/
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*b;
	size_t			i;

	i = 0;
	b = s;
	while (i < n)
	{
		b[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/*int	main(void)
{
	char str[50] = "LETS GOOOOOOO!";
	ft_memset(str,'$',3);
	printf("%s\n", str);
	memset(str,'$',7);
	printf("%s\n", str);
	return (0);
}*/
