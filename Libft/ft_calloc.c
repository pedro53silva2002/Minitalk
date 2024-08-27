/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peferrei <peferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 11:37:59 by peferrei          #+#    #+#             */
/*   Updated: 2024/05/06 13:55:03 by peferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
/** @brief Allocates memory
 * 	@param nmemb - number of objects to allocate
 *  @param size - bytes of memory of each object
 *  @return Returns a pointer to the allocated memory
*/
void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*tmp;

	if ((nmemb > 2147483647 && size != 0)
		|| (size > 2147483647 && nmemb != 0))
		return (NULL);
	tmp = (unsigned char *) malloc(nmemb * size);
	if (!tmp)
	{
		return (NULL);
	}
	ft_bzero(tmp, nmemb * size);
	return (tmp);
}

/*int	main(void)
{
	int *stringInt = (int *)calloc(5, sizeof(int));
	size_t i = 0;
	//printf("Mine: %s\n", ft_calloc(size_t nmemb, size_t size));
	printf("Original: Some%sThing\n", (char *)calloc(5, sizeof(int)));
	while (i < 5)
	{
		printf("Original Int: %d\n", &stringInt[i]);
		i++;	
	}
	return (0);
}*/

/*int		main(int argc, const char *argv[])
{
	char	*str;

	alarm(5);
	if (argc == 1)
		return (0);
	else if (atoi(argv[1]) == 1)
	{
		str = (char *)calloc(30, 1);
		if (!str)
		{
			write(1, "NULL", 4);
		}
		else
		{
			printf("asdasd");
			write(1, str, 30);
		}
	}
	return (0);
}*/

/*int main () {
   int i, n;
   int *a;

   printf("Number of elements to be entered:");
   scanf("%d",&n);

   a = (int*)calloc(n, sizeof(int));
   printf("Enter %d numbers:\n",n);
   for( i=0 ; i < n ; i++ ) {
      scanf("%d",&a[i]);
   }

   printf("The numbers entered are: ");
   for( i=0 ; i < n ; i++ ) {
      printf("%d ",a[i]);
   }
   free( a );
   
   return(0);
}*/
