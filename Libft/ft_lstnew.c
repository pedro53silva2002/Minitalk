/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peferrei <peferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 10:58:30 by peferrei          #+#    #+#             */
/*   Updated: 2024/05/06 15:14:48 by peferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h" 
/** @brief Creates a new list node element
 *  @param content - content for the new element
 *  @return returns the new list
*/
t_list	*ft_lstnew(void *content)
{
	t_list	*elem;

	elem = (t_list *)malloc(sizeof(*elem));
	if (!elem)
		return (NULL);
	elem->content = content;
	elem->next = NULL;
	return (elem);
}

/*int	main(void)
{
	char	*str = "hello, i'm a data";
	t_list *list =  ft_lstnew(str);
	if (!strcmp(str, list->content))
	{
		printf("TAT");
	}
	
	printf("%d", strcmp(str, list->content));
	printf("%s", (char *)list->content);
	return(0);
}*/
