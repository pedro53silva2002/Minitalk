/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peferrei <peferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 18:57:32 by peferrei          #+#    #+#             */
/*   Updated: 2024/05/06 15:24:32 by peferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"
/** @brief Creates a new list resulting 
 *     from the application of f to each element
 *  @param lst - list
 * 	@param f - function to apply
 * 	@param del - function that can delete an element's content
 *  @return Returns a list
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*new;
	void	*set;

	if (!f || !del || !lst)
		return (NULL);
	first = NULL;
	new = NULL;
	while (lst)
	{
		set = f(lst->content);
		new = ft_lstnew(set);
		if (!new)
		{
			del(set);
			ft_lstclear(&first, (*del));
			return (first);
		}
		ft_lstadd_back(&first, new);
		lst = lst->next;
	}
	return (first);
}
