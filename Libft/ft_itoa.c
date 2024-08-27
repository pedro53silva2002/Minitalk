/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peferrei <peferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:21:32 by peferrei          #+#    #+#             */
/*   Updated: 2024/05/06 14:37:25 by peferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h" 
/** @brief Puts each digit into the string
 * 	@param n - number
 * 	@param str - string
 * 	@param i - index of string
 *  @return Returns the string
*/
static char	*ft_putnbr(int n, char *str, int i)
{
	if (n == -2147483648)
	{
		ft_strlcpy(str, "-8463847412", 15);
	}
	else if (n < 0)
	{
		str[i] = '-';
		i++;
		ft_putnbr(-n, str, i);
	}
	else if (n < 10)
	{
		str[i] = (n + 48);
	}
	else
	{
		str[i] = (n % 10 + 48);
		i++;
		ft_putnbr(n / 10, str, i);
	}
	return (str);
}
/** @brief Reverses the string
 * 	@param str - string
 * 	@param i - beginning index of string
 * 	@param j - ending index of string
 *  @return Returns the string reversed
*/

static	char	*strrev(char *str, int i, int j)
{
	char	c;
	int		k;

	k = ft_strlen(str);
	if (str[0] == '-')
		j++;
	if (ft_strlen(str) % 2 != 0)
		k++;
	while (i >= k / 2)
	{
		c = str[j];
		str[j] = str[i];
		str[i] = c;
		i--;
		j++;
	}
	return (str);
}
/** @brief Gives the number size
 * 	@param n - number
 *  @return Returns the size of the number
*/

static int	ft_numlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}
/** @brief Converts an integer to string
 * 	@param n - number
 *  @return Returns the string
*/

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		j;
	int		numlen;

	numlen = ft_numlen(n);
	str = (char *)malloc(sizeof(char) * (numlen + 1));
	if (!str)
	{
		return (NULL);
	}
	str[numlen] = '\0';
	i = 0;
	j = 0;
	ft_putnbr(n, str, i);
	i = ft_strlen(str) - 1;
	if (numlen > 1 || (numlen == 2 && str[0] == '-'))
		str = strrev(str, i, j);
	return (str);
}

/*int	main(void)
{
	int nbr = -4134134;
	printf("Result: %s", ft_itoa(nbr));
	return(0);
}*/

/*void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

int		main(int argc, const char *argv[])
{
	int		arg;

	alarm(5);
	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
	{
		char *res = ft_itoa(0);
		ft_print_result(res);
		free(res);
	}
	else if (arg == 2)
	{
		char *res = ft_itoa(9);
		ft_print_result(res);
		free(res);
	}
	else if (arg == 3)
	{
		char *res = ft_itoa(-9);
		ft_print_result(res);
		free(res);
	}
	else if (arg == 4)
	{
		char *res = ft_itoa(10);
		ft_print_result(res);
		free(res);
	}
	else if (arg == 5)
	{
		char *res = ft_itoa(-10);
		ft_print_result(res);
		free(res);
	}
	else if (arg == 6)
	{
		char *res = ft_itoa(8124);
		ft_print_result(res);
		free(res);
	}
	else if (arg == 7)
	{
		char *res = ft_itoa(-9874);
		ft_print_result(res);
		free(res);
	}
	else if (arg == 8)
	{
		char *res = ft_itoa(543000);
		ft_print_result(res);
		free(res);
	}
	else if (arg == 9)
	{
		char *res = ft_itoa(-2147483648LL);
		ft_print_result(res);
		free(res);
	}
	else if (arg == 10)
	{
		char *res = ft_itoa(2147483647);
		ft_print_result(res);
		free(res);
	}
	return (0);
}*/
