/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peferrei <peferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 15:17:24 by peferrei          #+#    #+#             */
/*   Updated: 2024/05/06 15:18:26 by peferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"
/** @brief Gets the number of elements in a list
 *  @param lst - list
 * 	@return Returns the number of elements in the list
*/
int	ft_lstsize(t_list *lst)
{
	size_t	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

/*int main(void)
{
    // Create an empty linked list (initialize to NULL)
    t_list *list = NULL;

    // Create new elements to add to the list
    t_list *elem1 = malloc(sizeof(t_list));
    t_list *elem2 = malloc(sizeof(t_list));
    t_list *elem3 = malloc(sizeof(t_list));

    // Assign content to the elements (for demonstration, 
    content can be any type)
    elem1->content = "Element 1";
    elem2->content = "Element 2";
    elem3->content = "Element 3";

    // Add elements to the front of the list
    ft_lstadd_front(&list, elem3); // Add Element 3 to the front
    ft_lstadd_front(&list, elem2); // Add Element 2 to the front
    ft_lstadd_front(&list, elem1); // Add Element 1 to the front
    
    int size = ft_lstsize(list);
    printf("Size of the list: %d\n", size);

    // Don't forget to free the allocated memory for the elements
    free(elem1);
    free(elem2);
    free(elem3);

    return 0;
}*/
