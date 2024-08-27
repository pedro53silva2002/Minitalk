/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peferrei <peferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 19:33:27 by peferrei          #+#    #+#             */
/*   Updated: 2024/08/09 14:31:06 by peferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include "libft.h"
/** @brief Counts the words of the string
 * 	@param s - string
 * 	@param c - separator
 *  @return Returns the number of words in the string
*/
static size_t	ft_countwords(const char *s, char c)
{
	size_t	nb;
	size_t	i;

	nb = 1;
	i = 0;
	while (*s)
	{
		if (*s != c && i == 0)
		{
			i = 1;
			nb++;
		}
		else if (*s == c)
		{
			i = 0;
		}
		s++;
	}
	if (nb - i == 0)
		return (0);
	return (nb);
}
/** @brief Creates the word to put into the array of word
 * 	@param str - string
 * 	@param c - separator
 *  @return Returns the word created
*/

static char	*ft_createword(char *str, char c)
{
	char	*word;
	char	*strdummy;
	int		i;
	int		len;

	len = 0;
	strdummy = str;
	while (*strdummy != c && *strdummy != '\0')
	{
		len += 1;
		strdummy++;
	}
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = *str++;
		i++;
	}
	word[i] = '\0';
	return (word);
}
/** @brief Frees all the unused memory in the array of words
 * 	@param result - array of words
*/

static void	ft_freeall(char **result)
{
	char	**temp;

	temp = result;
	while (*temp)
	{
		free(*temp);
		temp++;
	}
	free(result);
}
/** @brief Initiates the process of spliting the string into an array of words
 * 	@param result - array of words
 * 	@param str - string
 * 	@param c - separator
 *  @return Returns an array of words
*/

static	char	**ft_tosplit(char **result, char *str, char c)
{
	size_t	i;

	i = 0;
	while (*str)
	{
		if (*str != c)
		{
			result[i] = ft_createword(str, c);
			if (result[i++] == NULL)
			{
				ft_freeall(result);
				return (NULL);
			}
			while (*str != c && *str != '\0')
				str++;
		}
		else
			str++;
	}
	result[i] = NULL;
	return (result);
}
/** @brief Splits a string into an array of words
 * 	@param s - string
 * 	@param c - separator
 *  @return Returns an array of words
*/

char	**ft_split(const char *s, char c)
{
	size_t	wordcount;
	char	*str;
	char	**result;

	if (!s)
		return (NULL);
	wordcount = ft_countwords(s, c);
	result = (char **)malloc((wordcount) * sizeof(char *));
	if (!result)
		return (NULL);
	str = (char *)s;
	return (ft_tosplit(result, str, c));
}

/*int	main(void)
{
	const char *s = "\0aa\0bbb";
	char c = '\0';
	char **result = ft_split(s, c);
	int i = 0;
	while (result[i])
	{
		printf("Results: %s\n", result[i]);
		i++;
	}
	result = NULL;
	return (0);
}*/
