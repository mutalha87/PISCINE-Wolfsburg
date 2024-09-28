/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutalha <mutalha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 22:10:51 by mutalha           #+#    #+#             */
/*   Updated: 2024/09/28 14:04:28 by mutalha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < nb && src[j])
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
// 	int n = 10;

//     printf("Before concatenation: %s\n", dest);
//     ft_strncat(dest, src, n);
//     printf("After concatenation till: %d \n %s\n",n ,dest);

//     return 0;
// }