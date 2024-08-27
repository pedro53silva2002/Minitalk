/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peferrei <peferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 15:42:20 by peferrei          #+#    #+#             */
/*   Updated: 2024/08/03 16:49:37 by peferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"
/** @brief Adds a new element to the end of the list
 *  @param lst - list
 * 	@param new - new element to add
*/
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst)
	{
		if (*lst)
		{
			last = ft_lstlast(*lst);
			last->next = new;
		}
		else
			*lst = new;
	}
}

/*int main(void)
{
    t_list *list = NULL;
    t_list *elem1 = malloc(sizeof(t_list));
    t_list *elem2 = malloc(sizeof(t_list));
    t_list *elem3 = malloc(sizeof(t_list));
    elem1->content = "Element 1";
    elem2->content = "Element 2";
    elem3->content = "Element 3";
    ft_lstadd_back(&list, elem1);
    ft_lstadd_back(&list, elem2);
    ft_lstadd_back(&list, elem3);
    printf("Contents of the list:\n");
    t_list *current = list;
    while (current != NULL)
    {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }
    free(elem1);
    free(elem2);
    free(elem3);
    return 0;
}*/
