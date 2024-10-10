/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutalha <mutalha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 07:59:24 by mutalha           #+#    #+#             */
/*   Updated: 2024/10/07 21:37:40 by mutalha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

void	ft_numd(char *c, int k)
{
	int		i;
	int		num;
	char	*temp;

	temp = NULL;
	if ((c[0] == '0' || c[1] == '0' || c[2] == '0') && k == 1)
	{
		temp[0] = '0';
		temp[1] = '\0';
		ft_read_file(temp);
	}
	if (c[0] == '0' && c[1] == '0' && c[2] == '0' && k == 0)
	{
		return ;
	}
	num = 0;
	i = 0;
	while (i < ft_strlen(c))
	{
		num = num * 10 + (c[i] - '0');
		i++;
	}
	temp = malloc (3 * sizeof(char));
	if ((num / 100) > 0)
	{
		temp[0] = (num / 100) + 48;
		temp[1] = '\0';
		ft_read_file(temp);
		temp[0] = '1';
		temp[1] = '0';
		temp[2] = '0';
		temp[3] = '\0';
		ft_read_file(temp);
	}
	num = num % 100;
	if (num > 0 && num < 10)
	{
		temp[0] = c[0];
		temp[1] = '\0';
		temp[2] = '\0';
		ft_read_file(temp);
	}
	if (num > 0 && num < 21 && num > 9)
	{
		temp[0] = c[ft_strlen(c) - 2];
		temp[1] = c[ft_strlen(c) - 1];
		temp[2] = '\0';
		ft_read_file(temp);
	}
	if (num > 20 && num < 100)
	{
		temp[0] = c[ft_strlen(c) - 2];
		temp[1] = '0';
		temp[2] = '\0';
		ft_read_file(temp);
		if (c[ft_strlen(c) - 1] > '0')
		{
			temp[0] = c[ft_strlen(c) - 1];
			temp[1] = '\0';
			ft_read_file(temp);
		}
	}
	free(temp);
}
