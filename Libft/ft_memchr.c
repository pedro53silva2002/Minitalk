/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peferrei <peferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:40:01 by peferrei          #+#    #+#             */
/*   Updated: 2024/05/06 13:44:25 by peferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
/** @brief Locates byte in byte string
 * 	@param s1 - string
 *  @param c - character
 * 	@param n - number of bytes to search
 *  @return Returns the pointer of the byte located
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	char	chr;
	size_t	i;

	i = 0;
	str = (char *)s;
	chr = (char)c;
	while (i < n)
	{
		if (*str == chr)
		{
			return ((void *)&*str);
		}
		i++;
		str++;
	}
	return (NULL);
}

/*int	main(void)
{
	char *s = "My name is Pedro";
	char c = 'm';
	
	printf("Mine: %s\n", (char *)ft_memchr(s,c, 7));
	printf("Original: %s\n", (char *)memchr(s,c, 7));
	return (0);
}*/
