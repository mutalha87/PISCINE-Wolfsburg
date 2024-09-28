/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutalha <mutalha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 22:10:47 by mutalha           #+#    #+#             */
/*   Updated: 2024/09/28 13:58:58 by mutalha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
// int	main(void)
// {
//     char dest[50] = "Hello, ";
//     char src[] = "to the World of 42 Wolfsburg.";

//     printf("Before concatenation: %s\n", dest);
//     ft_strcat(dest, src);
//     printf("After concatenation: %s\n", dest);

//     return 0;
// }