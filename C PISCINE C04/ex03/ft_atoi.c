/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutalha <mutalha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 19:53:39 by mutalha           #+#    #+#             */
/*   Updated: 2024/09/30 17:14:36 by mutalha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

int	ft_is_ws(char ch)
{
	int		i;
	char	*ws;

	ws = "\f\n\r\t\v ";
	i = 0;
	while (i < 6)
	{
		if (ch == ws[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	ft_atoi(char	*str)
{
	int	n;
	int	nb;

	n = 0;
	while (ft_is_ws(*str) == 1)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			n++;
		str++;
	}
	nb = 0;
	while (*str >= '0' && *str <= '9')
	{
		nb = nb * 10 + (*str - '0');
		str++;
	}
	if ((n % 2) == 1)
		return (-nb);
	else
		return (nb);
}

// int main()
// {
// 	char *str1;
// 	int j;
// 	str1 = "\v \n---+--+1234567ab567";
// 	j = ft_atoi(str1);
// 	printf("The number extracted: %d", j);
// }