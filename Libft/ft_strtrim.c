/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peferrei <peferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:26:08 by peferrei          #+#    #+#             */
/*   Updated: 2024/05/06 14:28:15 by peferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include "libft.h"
/** @brief Checks if current character it's to be trimmed
 * 	@param set - character set
 * 	@param c - string character
 *  @return Returns 1 it is to be trimmed and 0 if it isn't to be
*/
static int	ft_totrim(const char *set, char c)
{
	while (*set)
	{
		if (*set == c)
		{
			return (1);
		}
		set++;
	}
	return (0);
}
/** @brief Trims a character set from the string
 * 	@param set - string
 * 	@param c - character set
 *  @return Returns trimmed string
*/

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;

	if (!s1)
	{
		return (NULL);
	}
	i = 0;
	j = ft_strlen(s1);
	while (ft_totrim(set, s1[i]))
	{
		i++;
	}
	while (ft_totrim(set, s1[j - 1]))
	{
		j--;
	}
	return (ft_substr(s1, i, j - i));
}

/*int	main(void)
{
	char *s1 = "  \t \t \n   \n\n\n\t";
	char *set = "";
	
	printf("Result: %s", ft_strtrim(s1,set));
	return(0);
}*/
