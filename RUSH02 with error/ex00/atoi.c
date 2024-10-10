/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutalha <mutalha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:38:43 by mutalha           #+#    #+#             */
/*   Updated: 2024/10/07 18:38:14 by mutalha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

char	*ft_atoi(char *str)
{
	int		i;
	int		j;
	char	*strn;

	i = 0;
	if (str[0] == '-' || str[0] == '+')
	{
		if (str[0] == '-')
			return ("Error");
		i++;
		strn = malloc((ft_strlen(str) * sizeof(char)));
	}
	if (i == 0)
		strn = malloc((ft_strlen(str + 1) * sizeof(char)));
	j = 0;
	while ((str[i] >= '0' && str[i] <= '9') || str[i] == '.')
	{
		if (str[i] == '.')
			return ("Error");
		strn[j++] = str[i++];
	}
	strn[i] = '\0';
	return (strn);
}
