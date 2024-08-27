/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peferrei <peferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:26:12 by peferrei          #+#    #+#             */
/*   Updated: 2024/05/06 13:04:06 by peferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
/** @brief Compares n characters between two strings
 * 	@param s1 - string one
 *  @param s2 - string two
 * 	@param n - number of characters to compare
 *  @return Returns the difference between
 *	the different characters of both strings.
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if ((unsigned char) s1[i] != (unsigned char) s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	*s1 = "abcdef";
	char	*s2 = "abc\375xx";
	
	printf("%d\n", ft_strncmp(s1,s2, 10));
	printf("%d", strncmp(s1,s2, 10));
	return(0);
}*/

	/*unsigned int	i;
	unsigned int	result;

	i = 0;
	result = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < (n))
	{
		if (s1[i] != s2[i])
		{
			result = s1[i] - s2[i];
			if (s1[i] < 0)
				return (-result);
			return (result);
		}
		i++;
	}
	return (0);*/

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
		ft_print_result(ft_strncmp("salut", "salut", 5));
	else if (arg == 2)
		ft_print_result(ft_strncmp("test", "testss", 7));
	else if (arg == 3)
		ft_print_result(ft_strncmp("testss", "test", 7));
	else if (arg == 4)
		ft_print_result(ft_strncmp("test", "tEst", 4));
	else if (arg == 5)
		ft_print_result(ft_strncmp("", "test", 4));
	else if (arg == 6)
		ft_print_result(ft_strncmp("test", "", 4));
	else if (arg == 7)
		ft_print_result(ft_strncmp("abcdefghij", "abcdefgxyz", 3));
	else if (arg == 8)
		ft_print_result(ft_strncmp("abcdefgh", "abcdwxyz", 4));
	else if (arg == 9)
		ft_print_result(ft_strncmp("zyxbcdefgh", "abcdwxyz", 0));
	else if (arg == 10)
		ft_print_result(ft_strncmp("abcdefgh", "", 0));
	else if (arg == 11)
		ft_print_result(ft_strncmp("test\200", "test\0", 6));
	return (0);
}*/
