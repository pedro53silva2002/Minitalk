/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peferrei <peferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:03:24 by peferrei          #+#    #+#             */
/*   Updated: 2024/05/06 13:50:53 by peferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
/** @brief Locates a substring in a string
 * 	@param big - string
 *  @param little - substring
 * 	@param len - number of characters to search
 *  @return Returns a pointer of the first character of the substring
*/
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (len == 0 && !big)
		return (NULL);
	if (*little == '\0' || little == NULL)
		return ((char *)big);
	i = 0;
	j = 0;
	while (*big && i < len)
	{
		if (*big == little[j])
			j += 1;
		else
		{
			big = big - j;
			i -= j;
			j = 0;
		}
		if (j == ft_strlen(little))
			return ((char *) &*big - ft_strlen(little) + 1);
		i++;
		big++;
	}
	return (NULL);
}

/*int	main(void)
{
	const char *largestring = "aaabcabcd";
   	const char *smallstring = "abcd";
   	char *ptr;

   	ptr = ft_strnstr(largestring, smallstring, 9);
   	printf("Mine: %s jjjj\n", ptr);
	return (0);
} */

/*void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

int		main(int argc, const char *argv[])
{
	const char *str;
	int			arg;

	alarm(5);
	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
	{
		if (!(str = ft_strnstr("lorem ipsum dolor sit amet", "lorem", 15)))
			ft_print_result("NULL");
		else
			ft_print_result(str);
	}
	else if (arg == 2)
	{
		if (!(str = ft_strnstr("lorem ipsum dolor sit amet", "ipsum", 15)))
			ft_print_result("NULL");
		else
			ft_print_result(str);
	}
	else if (arg == 3)
	{
		if (!(str = ft_strnstr("lorem ipsum dolor sit lorem ipsum dolor"
		, "ipsum", 35)))
			ft_print_result("NULL");
		else
			ft_print_result(str);
	}
	else if (arg == 4)
	{
		if (!(str = ft_strnstr("lorem ipsum dolor sit amet", "", 10)))
			ft_print_result("NULL");
		else
			ft_print_result(str);
	}
	else if (arg == 5)
	{
		if (!(str = ft_strnstr("lorem ipsum dolor sit amet", "ipsumm", 30)))
			ft_print_result("NULL");
		else
			ft_print_result(str);
	}
	else if (arg == 6)
	{
		if (!(str = ft_strnstr("lorem ipsum dolor sit amet", "dol", 30)))
			ft_print_result("NULL");
		else
			ft_print_result(str);
	}
	else if (arg == 7)
	{
		if (!(str = ft_strnstr("lorem ipsum dolor sit amet", "consectetur", 30)))
			ft_print_result("NULL");
		else
			ft_print_result(str);
	}
	else if (arg == 8)
	{
		if (!(str = ft_strnstr("lorem ipsum dolor sit amet", "sit", 10)))
			ft_print_result("NULL");
		else
			ft_print_result(str);
	}
	else if (arg == 9)
	{
		if (!(str = ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15)))
			ft_print_result("NULL");
		else
			ft_print_result(str);
	}
	else if (arg == 10)
	{
		if (!(str = ft_strnstr("lorem ipsum dolor sit amet", "dolor", 0)))
			ft_print_result("NULL");
		else
			ft_print_result(str);
	}
	return (0);
}*/
