/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutalha <mutalha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 20:41:52 by mutalha           #+#    #+#             */
/*   Updated: 2024/10/08 16:29:59 by mutalha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] < 32 || base[i] > 126)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i >= 2);
}

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void	ft_strrev(char *str, int len)
{
	int		i;
	char	tmp;

	i = 0;
	while (i < len / 2)
	{
		tmp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = tmp;
		i++;
	}
}

int	convert_to_base(int num, char *base, char *result)
{
	int		i;
	int		base_len;
	int		is_negative;

	base_len = ft_strlen(base);
	i = 0;
	is_negative = (num < 0);
	if (num == 0)
		result[i++] = base[0];
	else
	{
		if (is_negative)
			num = -num;
		while (num > 0)
		{
			result[i++] = base[num % base_len];
			num /= base_len;
		}
		if (is_negative)
			result[i++] = '-';
	}
	return (i);
}

char	*decimaltocustombase(int num, char *base)
{
	char	*result;
	int		len;

	if (!is_valid_base(base))
		return (NULL);
	result = (char *)malloc(34);
	if (!result)
		return (NULL);
	len = convert_to_base(num, base, result);
	result[len] = '\0';
	ft_strrev(result, len);
	return (result);
}
