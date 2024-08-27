/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peferrei <peferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 10:46:50 by peferrei          #+#    #+#             */
/*   Updated: 2024/05/06 12:06:44 by peferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"
/** @brief Moves n bytes of memory area of src
 *  to the memory area of dest. Can handle overlapping.
 *  @param dest - destiny memory area
 *  @param src - source memory area
 *  @param n - len of bytes
 *  @return returns the final form of dest
*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*s;
	char	*d;

	d = (char *)dest;
	s = (char *)src;
	if (s < d)
	{
		while (n > 0)
		{
			d[n - 1] = s[n - 1];
			n--;
		}
	}
	else
	{
		ft_memcpy(d, s, n);
	}
	return (dest);
}
/*int	main(void)
{	
	char str[50] = "lorem ipsum dolor sit amet ";;
	char str2[50] = "lorem ipsum dolor sit amet";
	char str3[50] = "lorem ipsum dolor sit amet ";;
	char str4[50] = "lorem ipsum dolor sit amet";
	ft_memmove(str, str2, 8);
	printf("My function: %s\n\n", str);
	memmove(str3, str4, 8);
	printf("Original function: %s\n", str3);
	return (0);
}*/
