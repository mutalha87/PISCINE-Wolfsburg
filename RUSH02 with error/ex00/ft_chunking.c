/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chunking.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutalha <mutalha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 02:28:25 by mutalha           #+#    #+#             */
/*   Updated: 2024/10/07 21:35:54 by mutalha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

void	ft_chunking(char *s)
{
	int	key;
	int	sl;

	key = 0;
	sl = ft_strlen(s);
	while (key < sl)
	{
		if (((sl % 3) != 0 && (sl / 3) != 0 && key == 0))
		{
			key = ft_ms_chunking(s, sl);
		}
		else if (((sl - key) % 3) == 0 && ((sl - key) / 3) > 1)
		{
			key = ft_mid_chunking(s, key, sl);
		}
		else if ((sl - key) == 3)
		{
			key = ft_last_chunking(s, key);
		}
		else if (sl <= 3)
		{
			key = ft_small_string(s, sl);
		}
	}
	free(s);
}

int	ft_ms_chunking(char *s, int sl)
{
	int		i;
	int		j;
	int		ms;
	char	*nb;

	ms = 0;
	nb = malloc((4) * sizeof(char));
	ms = (sl % 3);
	j = 0;
	i = 0;
	while (j < ms)
		nb[j++] = s[i++];
	nb[j] = '\0';
	ft_numd(nb, 0);
	free(nb);
	nb = malloc((sl - ms + 2) * sizeof(char));
	if (nb[0] != '0' || nb[1] != '0' || nb[2] != '0')
	{
		nb[0] = '1';
		j = 1;
		while (j < sl - ms + 1)
			nb[j++] = '0';
		nb[j] = '\0';
		ft_read_file(nb);
	}
	free(nb);
	return (ms);
}

int	ft_mid_chunking(char *s, int key, int sl)
{
	int		i;
	int		j;
	int		num;
	char	*nb;

	i = 0;
	nb = malloc(4 * sizeof(char));
	i = key;
	num = key + 3;
	j = 0;
	while (j < 3)
		nb[j++] = s[i++];
	nb[j] = '\0';
	ft_numd(nb, 0);
	free(nb);
	nb = malloc((sl - num + 2) * sizeof(char));
	if (nb[0] != '0' || nb[1] != '0' || nb[2] != '0')
	{
		nb[0] = '1';
		j = 1;
		while (j < sl - num + 1)
			nb[j++] = '0';
		nb[j] = '\0';
		ft_read_file(nb);
	}
	free(nb);
	return (num);
}

int	ft_last_chunking(char *s, int key)
{
	int		i;
	int		j;
	int		num;
	char	*nb;

	i = 0;
	nb = malloc(4 * sizeof(char));
	i = key;
	num = key + 3;
	j = 0;
	while (j < 3)
		nb[j++] = s[i++];
	nb[j] = '\0';
	ft_numd(nb, 0);
	return (num);
}

int	ft_small_string(char *s, int sl)
{
	int	key;

	ft_numd(s, 1);
	key = sl;
	return (key);
}
