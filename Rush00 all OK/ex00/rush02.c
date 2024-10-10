/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutalha <mutalha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 11:42:06 by mutalha           #+#    #+#             */
/*   Updated: 2024/09/22 14:43:15 by mutalha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	rush02(int i, int j)
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
			if ((col == 1 || col == i) && row == 1)
				ft_putchar('A');
			else if ((col == 1 || col == i) && row == j)
				ft_putchar('C');
			else if (col != 1 && col != i && row != 1 && row != j)
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
