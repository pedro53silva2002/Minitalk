/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peferrei <peferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:31:24 by peferrei          #+#    #+#             */
/*   Updated: 2024/08/16 15:02:10 by peferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <string.h>
#include "libft.h"
/** @brief Finds the length of a string
 *  @param str - string
 *  @return returns the length of the string
*/
size_t	ft_getnextline_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str != NULL && str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/** @brief Locates the first occurence of a character in a string
 * 	@param s - string
 *  @param c - character
 *  @return Returns the part of the string that starts with that character
*/
char	*ft_getnextline_strchr(const char *s, int c)
{
	char	cc;
	int		i;

	cc = (char)c;
	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i] == cc)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if (s[i] == cc)
		return ((char *)&s[i]);
	return (NULL);
}

/** @brief Extracts a substring from a string
 * 	@param s - string
 * 	@param start - index to start to substring
 * 	@param len - size of substring
 *  @return Returns the substring
*/
char	*ft_getnextline_substr(char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (!s)
		return (0);
	if (len > ft_getnextline_strlen(s) - start)
		len = ft_getnextline_strlen(s) - start;
	if (start > ft_getnextline_strlen(s))
		return (ft_getnextline_strdupn(""));
	str = (char *) malloc(sizeof(*s) * len + 1);
	if (!str)
		return (0);
	i = 0;
	while (s[start] && i < len)
	{
		str[i] = s[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}

/** @brief Concatenates two strings into a new one
 * 	@param s1 - string one
 * 	@param s2 - string two
 *  @return Returns the new string
*/
char	*ft_getnextline_strjoin(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = (char *)malloc(sizeof(char) * (ft_gnllen(s1) + ft_gnllen(s2) + 1));
	if (!str)
		return (0);
	i = 0;
	j = 0;
	while (s1[i] && s1)
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] && s2)
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	if (s1)
		free((char *)s1);
	return (str);
}

char	*ft_getnextline_strdupn(const char *s)
{
	size_t	i;
	size_t	n;
	char	*str;

	if (!s)
		return (NULL);
	n = 0;
	while (s[n] != '\n' && s[n] != '\0')
		n++;
	n += 1;
	str = (char *)malloc(sizeof(char) * (n + 1));
	if (!str)
	{
		return (NULL);
	}
	i = 0;
	while (s[i] && i < n)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
