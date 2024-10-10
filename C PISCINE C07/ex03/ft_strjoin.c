/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutalha <mutalha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 14:48:43 by mutalha           #+#    #+#             */
/*   Updated: 2024/10/10 11:46:27 by mutalha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_joining(char *res, char **strs, int size, char *sep)
{
	int	k;
	int	l;
	int	rl;

	k = -1;
	rl = 0;
	while (++k < size)
	{
		l = 0;
		while (strs[k][l] != '\0')
		{
			res[rl++] = strs[k][l++];
		}
		l = 0;
		if (k < size - 1)
		{
			while (sep[l] != '\0')
			{
				res[rl++] = sep[l++];
			}
		}
	}
	res[rl] = '\0';
	return (res);
}

int	get_total_size(char **strs, int size)
{
	int	i;
	int	total;

	total = 0;
	i = 0;
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		i++;
	}
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	char	*empty_str;

	if (size == 0)
	{
		empty_str = (char *)malloc(1);
		if (empty_str)
		{
			empty_str[0] = '\0';
		}
		return (empty_str);
	}
	res = (char *)malloc(sizeof(char)
			* (get_total_size(strs, size) - 1) * ft_strlen(sep));
	if (!res)
		return (NULL);
	res = ft_joining(res, strs, size, sep);
	return (res);
}

// int main ()
// {
// 	char *strs[] = {"Hello", "to", "the", "world", "of", "42", "Wolfsburg"};
// 	char *sep = ("   ");
// 	printf("%s", ft_strjoin(7, strs, sep));
// }