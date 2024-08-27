/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peferrei <peferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:33:54 by peferrei          #+#    #+#             */
/*   Updated: 2024/05/06 13:48:23 by peferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
/** @brief Compares byte strings
 * 	@param s1 - string one
 *  @param s2 - string two
 * 	@param n - number of bytes to search
 *  @return Returns difference of the different bytes if located.
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	unsigned int	result;
	unsigned char	*p1;
	unsigned char	*p2;

	i = 0;
	result = 0;
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while (i < n)
	{
		if (p1[i] != p2[i])
		{
			result = p1[i] - p2[i];
			return (result);
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char *s = "My name is coletes";
	char *c = "My name is Coletes";
	
	printf("Mine: %d\n", ft_memcmp(s,c, 7));
	printf("Original: %d\n", memcmp(s,c, 7));
	return (0);
}*/

/*void	ft_print_result(int n)
{
	if (n > 0)
		write(1, "1", 1);
	else if (n < 0)
		write(1, "-1", 2);
	else
		write(1, "0", 1);
}

int		main(int argc, const char *argv[])
{
	int		arg;

	alarm(5);
	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
		ft_print_result(ft_memcmp("salut", "salut", 5));
	else if (arg == 2)
	{
		ft_print_result(ft_memcmp("t\200", "t\0", 2));
		ft_print_result(memcmp("t\200", "t\0", 2));
	}
	else if (arg == 3)
		ft_print_result(ft_memcmp("testss", "test", 5));
	else if (arg == 4)
		ft_print_result(ft_memcmp("test", "tEst", 4));
	else if (arg == 5)
		ft_print_result(ft_memcmp("", "test", 4));
	else if (arg == 6)
		ft_print_result(ft_memcmp("test", "", 4));
	else if (arg == 7)
		ft_print_result(ft_memcmp("abcdefghij", "abcdefgxyz", 7));
	else if (arg == 8)
		ft_print_result(ft_memcmp("abcdefgh", "abcdwxyz", 6));
	else if (arg == 9)
		ft_print_result(ft_memcmp("zyxbcdefgh", "abcdefgxyz", 0));
	return (0);
}*/
