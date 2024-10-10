/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutalha <mutalha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 16:13:56 by mutalha           #+#    #+#             */
/*   Updated: 2024/09/22 14:47:30 by mutalha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	rush00(int i, int j)
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
			if ((col == 1 || col == i) && (row == 1 || row == j))
				ft_putchar('o');
			else if ((col != 1 || col != i) && (row == 1 || row == j))
				ft_putchar('-');
			else if ((col == 1 || col == i) && (row != 1 || row != j))
				ft_putchar('|');
			else
				ft_putchar(' ');
			col++;
		}
		row++;
		ft_putchar('\n');
	}
}
