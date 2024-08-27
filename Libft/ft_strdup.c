/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peferrei <peferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 16:48:12 by peferrei          #+#    #+#             */
/*   Updated: 2024/05/06 13:56:50 by peferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
/** @brief Allocates memory to save a copy of a string
 * 	@param s - string to copy
 *  @return Returns a pointer to the copy
*/
char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*str;

	str = (char *) malloc(sizeof(char) * (ft_strlen(s)+1));
	if (!str)
	{
		return (NULL);
	}
	i = 0;
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*int	main(void)
{
	char *string;
	string = "LMAO";
	printf("Mine: %s\n", ft_strdup(string));
	printf("Original: %s\n", strdup(string));
	return (0);
}*/
