/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_putptr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peferrei <peferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 11:36:12 by peferrei          #+#    #+#             */
/*   Updated: 2024/06/18 15:41:43 by peferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_put_ptr(unsigned long num)
{
	int	count;

	count = 0;
	if (num >= 16)
	{
		count += ft_put_ptr(num / 16);
		count += ft_put_ptr(num % 16);
	}
	else
	{
		if (num <= 9)
			count += ft_printfputchar_fd((num + '0'), 1);
		else
			count += ft_printfputchar_fd((num - 10 + 'a'), 1);
	}
	return (count);
}
/** @brief Writes the address of the pointer
 * 	@param ptr - pointer
 * 	@return Returns the size of the pointer
*/

int	ft_printfputptr(unsigned long ptr)
{
	if (ptr == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	else
	{
		write(1, "0x", 2);
		return (ft_put_ptr(ptr) + 2);
	}
	return (5);
}
