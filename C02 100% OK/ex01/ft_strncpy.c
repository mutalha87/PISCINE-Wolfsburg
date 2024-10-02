/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhasanov <vhasanov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 23:15:21 by vhasanov          #+#    #+#             */
/*   Updated: 2024/09/27 21:00:49 by vhasanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

// #include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// int main(){
// 	char src[] = "Vusal Hasanov";
// 	int size = sizeof(src)/sizeof(int);
// 	char dest[size];
// 	int n = 5;
// 	ft_strncpy(dest, src, n);
// 	printf("src = %s\n", src);
// 	printf("dest with %d characters = %s", n, dest);
// }