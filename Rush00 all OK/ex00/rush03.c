/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutalha <mutalha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 17:28:58 by mutalha           #+#    #+#             */
/*   Updated: 2024/09/22 14:39:46 by mutalha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	rush03(int i, int j)
{
	int	col;
	int	row;

	if (i <= 0 || j <= 0)
		return (0);
	row = 1;
	while (row <= j)
	{
		col = 1;
		while (col <= i)
		{
			if ((row == 1 && col == 1) || (row == j && col == 1))
				ft_putchar('A');
			else if ((row == 1 && col == i) || (row == j && col == i))
				ft_putchar('C');
			else if (row != 1 && row != j && col != 1 && col != i)
				ft_putchar(' ');
			else
				ft_putchar('B');
			col++;
		}
		row++;
		ft_putchar('\n');
	}
	return (0);
}
