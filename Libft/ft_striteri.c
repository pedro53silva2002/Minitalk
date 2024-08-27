/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peferrei <peferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:20:47 by peferrei          #+#    #+#             */
/*   Updated: 2024/05/06 14:39:10 by peferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
/** @brief Apllies a function to each character of a string (index specified)
 * 	@param s - string
 * 	@param f - function
 *  @return Returns the string
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (s && f)
	{
		while (s[i])
		{
			(*f)(i, &s[i]);
			i++;
		}
	}
}
