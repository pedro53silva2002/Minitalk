/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peferrei <peferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:53:10 by peferrei          #+#    #+#             */
/*   Updated: 2024/05/06 12:03:28 by peferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
/** @brief Copies n bytes of memory area of src 
 *  to the memory area of dest. Can't handle overlapping.
 *  @param dest - destiny memory area
 *  @param src - source memory area
 *  @param n - len of bytes
 *  @return returns the final form of dest
*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*b;
	unsigned char	*c;
	size_t			i;

	if (!src && !dest)
	{
		return (NULL);
	}
	i = 0;
	b = dest;
	c = (unsigned char *)src;
	while (i < n)
	{
		b[i] = c[i];
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char str[50] = "bbbbbbbbbbbbbbbbbbbbbbbbbb";
	char str2[50] = "ASAdassdasd";
	ft_memcpy(str, str2, 20);
	printf("%s\n", str);
	memcpy(str, str2, 50);
	printf("%s\n", str);
	return (0);
}*/
