/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutalha <mutalha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 16:13:37 by mutalha           #+#    #+#             */
/*   Updated: 2024/09/26 23:07:24 by mutalha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int		i;
	char	*dest_ptr;

	dest_ptr = dest;
	i = 0;
	while (src[i] != '\0')
	{
		dest_ptr[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest_ptr);
}
