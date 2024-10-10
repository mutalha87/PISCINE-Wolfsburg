/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutalha <mutalha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 13:28:36 by mutalha           #+#    #+#             */
/*   Updated: 2024/10/02 14:00:42 by mutalha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	l;

	l = (max - min);
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
	{
		range[0][i] = min;
		i++;
		min++;
	}
	return (l);
}

// #include <stdio.h>

// int main()
// {
//     int *range;
//     int min = 10;
//     int max = 20;
//     int s;
//     s = ft_ultimate_range(&range, min, max);
//      printf(" Value of length %d  \n", s);
//     for(int i = 0; i < s; i++)
//         printf(" %d ",range[i]);
// }