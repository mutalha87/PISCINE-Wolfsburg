/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutalha <mutalha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 01:25:34 by mutalha           #+#    #+#             */
/*   Updated: 2024/10/06 23:26:45 by mutalha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

char	*ft_trim(char *str)
{
	int		i;
	int		j;
	char	*strn;

	i = 0;
	j = 0;
	strn = (char *)malloc(ft_strlen(str));
	while (str[i] != '\n')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			strn[j] = str[i];
			j++;
		}
		i++;
	}
	strn[j] = '\0';
	return (strn);
}
