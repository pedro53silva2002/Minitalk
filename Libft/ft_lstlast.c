/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peferrei <peferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 15:27:09 by peferrei          #+#    #+#             */
/*   Updated: 2024/08/06 17:31:32 by peferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"
/** @brief Gets last element of the list
 *  @param lst - list
 * 	@return Returns the last element of the list
*/
t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (!lst->next)
			return (lst);
		lst = lst->next;
	}
	return (lst);
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
    //content can be any type)
    elem1->content = "Element 1";
    elem2->content = "Element 2";
    elem3->content = "Element 3";

    // Add elements to the front of the list
    ft_lstadd_front(&list, elem3); // Add Element 3 to the front
    ft_lstadd_front(&list, elem2); // Add Element 2 to the front
    ft_lstadd_front(&list, elem1); // Add Element 1 to the front

    // Print the contents of the list
    printf("Contents of the list:\n");
    t_list *current = list;
    while (current != NULL)
    {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }
    
	t_list *result = ft_lstlast(list);
    printf("Last item of the list: %s\n", (char *)result);

    // Don't forget to free the allocated memory for the elements
    free(elem1);
    free(elem2);
    free(elem3);

    return 0;
}*/
