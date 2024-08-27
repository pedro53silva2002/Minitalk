/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peferrei <peferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 14:53:36 by peferrei          #+#    #+#             */
/*   Updated: 2024/08/16 14:48:13 by peferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h" 
/** @brief Deletes an element of the list
 *  @param lst - list
 * 	@param del - address of the function that can delete the element's content
*/
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/*int	main(void)
{
	char	*str = "I'm sorry if I seem uninterested";
	t_list *list =  ft_lstnew(str);
	
	printf("%s", (char *)list->content);
	return(0);
}*/
