/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutalha <mutalha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 12:50:12 by mutalha           #+#    #+#             */
/*   Updated: 2024/10/02 13:55:15 by mutalha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;

	if (min >= max)
		return (NULL);
	range = malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}

// #include <stdio.h>

// int main(void)
// {
// 	int min = 10;
// 	int max = 20;
// 	int *r;

// 	r = ft_range(min, max);
// 	for(int i = 0; i <= ((max - min) - 1); i++)
// 		printf(" %d ", r[i]);
// }
