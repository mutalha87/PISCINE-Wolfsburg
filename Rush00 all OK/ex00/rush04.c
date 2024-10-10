/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutalha <mutalha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 22:34:23 by mutalha           #+#    #+#             */
/*   Updated: 2024/09/22 14:38:16 by mutalha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	rush04(int i, int j)
{
	int	c;
	int	r;

	if (i <= 0 || j <= 0)
		return (0);
	r = 1;
	while (r <= j)
	{
		c = 1;
		while (c <= i)
		{
			if ((r == 1 && c == 1) || ((r == j && c == i) && r > 1 && c > 1))
				ft_putchar('A');
			else if ((r == 1 && c == i) || (r == j && c == 1))
				ft_putchar('C');
			else if (r != 1 && r != j && c != 1 && c != i)
				ft_putchar(' ');
			else
				ft_putchar('B');
			c++;
		}
		r++;
		ft_putchar('\n');
	}
	return (0);
}
