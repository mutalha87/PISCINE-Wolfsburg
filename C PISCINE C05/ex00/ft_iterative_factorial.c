/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutalha <mutalha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:46:40 by mutalha           #+#    #+#             */
/*   Updated: 2024/10/01 18:30:39 by mutalha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	i = nb -1;
	while (i > 1)
	{
		nb = nb * i;
		i--;
	}
	return (nb);
}

// #include <stdio.h>
// int main()
// {
// 	printf("the factorial of 5 is : %d", ft_iterative_factorial(5));
// }