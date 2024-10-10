/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutalha <mutalha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:51:45 by mutalha           #+#    #+#             */
/*   Updated: 2024/10/10 17:01:35 by mutalha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_abs.h"

int	main(void)
{
	int	values[7];
	int	size;
	int	i;

	values[0] = 5;
	values[1] = -100;
	values[2] = 0;
	values[3] = 42;
	values[4] = -42;
	values[5] = -1;
	values[6] = 1;
	size = sizeof(values) / sizeof(values[0]);
	i = 0;
	while (i < size)
	{
		printf("ABS(%d) = %d\n", values[i], ABS(values[i]));
		i++;
	}
	return (0);
}
