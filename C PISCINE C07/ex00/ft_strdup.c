/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutalha <mutalha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:43:47 by mutalha           #+#    #+#             */
/*   Updated: 2024/10/08 22:55:30 by mutalha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

int	ft_strlen(const char *c)
{
	int	i;

	i = 0;
	while (c[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(const char *src)
{
	int		len;
	char	*dup;
	int		i;

	if (src == NULL)
		return (NULL);
	len = ft_strlen(src);
	dup = malloc(len + 1);
	if (dup == NULL)
		return (NULL);
	i = -1;
	while (++i < len)
	{
		dup[i] = src[i];
	}
	dup[len] = '\0';
	return (dup);
}

// #include <stdio.h>
// int main (void)
// {
// 	char *s1 = NULL;
// 	printf("destination string is : %s", ft_strdup(s1));
// 	printf("destination string is : %s", strdup(s1));
// }