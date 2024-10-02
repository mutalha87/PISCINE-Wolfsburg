/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhasanov <vhasanov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:55:04 by vhasanov          #+#    #+#             */
/*   Updated: 2024/09/27 02:49:26 by vhasanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_size;

	src_size = ft_strlen(src);
	i = 0;
	if (size != '\0')
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_size);
}

// int	main(void)
// {
// 	char src[] = "Vusal Hasanov";
// 	char dest[] = {};
// 	unsigned size;
// 	printf("src:\n%s\n", src);
// 	size = ft_strlcpy(dest, src, 8);
// 	printf("dest:\n%s\n", dest);
// 	printf("size:\n%d\n", size);
// 	return (0);
// }