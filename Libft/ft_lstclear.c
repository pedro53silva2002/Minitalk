/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peferrei <peferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 16:51:56 by peferrei          #+#    #+#             */
/*   Updated: 2024/05/06 15:21:17 by peferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"  
/** @brief Removes an element and all the following
 *  @param lst - list
 * 	@param del - address of the function that can delete the element's content
*/
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!del || !lst || !*lst)
		return ;
	while (lst && *lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}

/*int	main(void)
{
	char	*str = "I'm sorry if I seem uninterested";
	t_list *list =  ft_lstnew(str);
	
	printf("%s", (char *)list->content);
	printf("asdadadsdasdadsasdad");
	return(0);
}*/
